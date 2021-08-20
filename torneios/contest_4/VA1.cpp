#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <vector>
#include <utility>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::swap;
using std::pair;
using std::make_pair;


struct candidatos
{
    int QuestionsCorrect;
    int time[11];
    int status[11];
    /*- status = -1 ----> submissons inccorect
      - status = 1 -----> submissions correct OK  */
    int penalidade;
    void reset()
    {
        for (int i = 1; i < 11; i++)
        {
        status[i]=0;
        time[i]=0;
        }  
    }
    
};

typedef struct candidatos Tpcandidatos;

Tpcandidatos Candidatos[101];


  
vector<pair<int,pair<int,int>>> Winner;
//ID , QUESTIONCORRECT, PENALITY

void question_correct(int quest, int id, int time){
    if(Candidatos[id].status[quest] !=1)
    {
        Candidatos[id].penalidade+=(Candidatos[id].time[quest]+ time);
        Candidatos[id].status[quest]=1;
        Candidatos[id].QuestionsCorrect++;
    }
}
void question_incorrect(int quest, int id)
{
    if(Candidatos[id].status[quest] !=1)
    {
      Candidatos[id].time[quest]+=20;
      Candidatos[id].status[quest] = -1;
    }  
}

void begin(int array[])
{
    for (int i = 0; i < 101; i++)
    {
        array[i]=-1;
        Candidatos[i].penalidade=0;
        Candidatos[i].QuestionsCorrect=0;
        Candidatos[i].reset();
    }
        Winner.clear();

}
bool ordenar(pair<int,pair<int,int>> A, pair<int,pair<int,int>> B)
{
    if(A.second.first > B.second.first)
        return true;
    else if(A.second.first == B.second.first)
    {
        if(A.second.second < B.second.second)
            return true;
        else if(A.second.second == B.second.second)
            if(A.first < B.first)
                return true;
    }

    return false;

}

int main(){
    int cases, ID, Quest, time;
    int verifiqCandidate[101];
    char Submit;
    string input;


    std::cin >> cases;
    getline(std::cin, input);
    getline(std::cin, input);

    while(cases--)
    {
        begin(verifiqCandidate);

        while(getline(std::cin, input))
        {

            if ( input == "" ) break;

            std::istringstream iss(input);
            iss >> ID >> Quest >> time >> Submit;

            if(verifiqCandidate[ID] == -1)
                verifiqCandidate[ID] = 1;
    

            if(Submit == 'C')
                question_correct(Quest, ID, time);

            else if(Submit == 'I')
                question_incorrect(Quest, ID);

        }
        for(int i = 0; i < 101; i++)
            if(verifiqCandidate[i] == 1)
                Winner.push_back(make_pair(i,make_pair(Candidatos[i].QuestionsCorrect, Candidatos[i].penalidade)));
       
            std::sort(Winner.begin(),Winner.end(), ordenar); 

        /*for(unsigned int i = 0; i < Winner.size()-1; i++)
            for (unsigned j = 0; j < Winner.size()-1; j++)
                if(ordenar(Winner[i],Winner[i+1]) == true)
                    swap(Winner[i],Winner[i+1]);*/

                for(unsigned int j = 0; j < Winner.size(); j++)
                    printf("%d %d %d\n", Winner[j].first, Winner[j].second.first, Winner[j].second.second);  
        if(cases !=0)
            printf("\n");

    }
       
}