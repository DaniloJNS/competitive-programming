#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct candidatos
{
    int QuestionsCorrect;
    int time[10];
    int status[10];
    int FullTime;
};

typedef struct candidatos Tpcandidatos;

Tpcandidatos DataCandidatos[101];

struct scoreboard
{
    int Opcode;
    int time;
    int status;
};

typedef struct scoreboard Tpscoreboard;
  
    Tpscoreboard Winner[10][101];

int main(){
    int Cases, NumPart, Quest, Qtime, Qlength[10] = {0,0,0,0,0,0,0,0,0,0} , QuestionComplete = 0;
    char Submit;
    short k=1;

    scanf("%d", &Cases);

    /*for (int i = 0; i < 102; i++)
    {
        for (int j = 0; j<11; j++)
            DataCandidatos[i].time[j] = 0;
        
        DataCandidatos[i].FullTime = 0;
        DataCandidatos[i].QuestionsCorrect = 0;
        
    }*/
    
    for (short i = 1; i <= Cases*5; i++)
    {
        scanf("\n%d %d %d %c",&NumPart, &Quest, &Qtime, &Submit);

        if((Submit == 'I') && (DataCandidatos[NumPart].status[Quest] != -1))
            DataCandidatos[NumPart].time[Quest]++;


        
        else if(Submit == 'C')
        {

            DataCandidatos[NumPart].QuestionsCorrect++;
            DataCandidatos[NumPart].status[Quest] = -1;
            DataCandidatos[NumPart].FullTime += DataCandidatos[NumPart].time[Quest] * 20 + Qtime;

            Qlength[ DataCandidatos[NumPart].QuestionsCorrect ]++;

            if(DataCandidatos[NumPart].QuestionsCorrect > 1)
                Qlength[ DataCandidatos[NumPart].QuestionsCorrect - 1]--;

            if(DataCandidatos[NumPart].QuestionsCorrect > QuestionComplete)
                QuestionComplete++;

            k=1;

            if( Qlength[ DataCandidatos[NumPart].QuestionsCorrect ] == 1)
            {
                 Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k].Opcode = NumPart;
                 Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k].time = DataCandidatos[NumPart].FullTime;
                            
            }
            

            else
            {
                
                for (k = Qlength[ DataCandidatos[NumPart].QuestionsCorrect ]; k >= 1; k--)
                {
                    
                    if(DataCandidatos[ NumPart ].FullTime > Winner[ DataCandidatos[ NumPart ].QuestionsCorrect ][ k ].time)
                    {
                        Winner[ DataCandidatos[ NumPart ].QuestionsCorrect ][k + 1].Opcode = Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k].Opcode;
                        Winner[ DataCandidatos[ NumPart ].QuestionsCorrect ][k + 1].time = Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k].time;

                        
                    }
                            
                    
                    else if(DataCandidatos[NumPart].FullTime < Winner[DataCandidatos[NumPart].QuestionsCorrect][k].time)
                    {
                        Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k + 1].Opcode = NumPart;
                        Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k + 1].time = DataCandidatos[NumPart].FullTime;
                    
                    }

                    else if(DataCandidatos[NumPart].FullTime == Winner[DataCandidatos[NumPart].QuestionsCorrect][k].time)
                    {
                        if( NumPart > Winner[DataCandidatos[NumPart].QuestionsCorrect][k].Opcode)
                        {
                            Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k + 1].Opcode = Winner[ DataCandidatos[NumPart].QuestionsCorrect ][ k ].Opcode;
                            Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k + 1].time = Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k].time;

                            Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k].Opcode = NumPart;
                            Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k].time = DataCandidatos[NumPart].FullTime;

                        }

                        else
                        {
                            Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k+1].Opcode = NumPart;
                            Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k+1].time = DataCandidatos[NumPart].FullTime;

                        }
                        Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k].status=-1;
                    }
                }
                
            }
        }
    }

    printf("\n");

    for (short i = QuestionComplete; i > 0; i--)
    {
        for (short j = 1; j <= Qlength[i]; j++)
        {
            printf("%d %d %d\n", Winner[i][j].Opcode, i, Winner[i][j].time);  

            //if(Winner[ DataCandidatos[NumPart].QuestionsCorrect ][k].status == -1)
                //printf("\n");
        }
    }    
}