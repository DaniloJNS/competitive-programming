#include <bits/stdc++.h>
#include <iostream>
#include <ostream>

using namespace std;

int mirror[10] = {0, 1, 5 , -1, -1, 2, -1, -1, 8, -1};
    
bool solver(int H, int M, int h, int m) {
    
    int H1=0, H2=0, M1=0, M2=0;
    cout<<"alguma coisa"<<endl;
for (range-declaration : range-expression) {
statements
}                                                
    if(H!=0)
    
    H1 = H / 10;
    H2 = H - H1*10;
        
    if(M!=0)
    M1 = M / 10;
    M2 = M - M1*10;

    if(mirror[H1] == -1 || mirror[M1] == -1 
    || mirror[H2] == -1 || mirror[M2] == -1) 
        return false;

    M = mirror[H2]*10 + mirror[H1];
    H = mirror[M2]*10 + mirror[M1];

    if(H<h && M<m) {

    cout << H1 << H2;
    cout << ":"; 
    cout << M1 << M2 << endl;

    return true;            
    }        
    return false;
}

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int nCases, H, M, HT, MT;

    string strHora;

    cin >> nCases;

    while (nCases--)
    {
        cin >> H >> M;
        cin >> strHora;

        HT = stoi(strHora.substr(0,2));
        MT = stoi(strHora.substr(3,4));

        if(solver(HT, MT, H, M)) continue;
        
        else {

            while (true)
            {
              if(MT == M){
                HT++; MT=0;
              }  
              if(HT == H) 
                  HT=0;

              if(solver( HT, MT, H, M)) break;

              MT++;            
            }
            
        }

    }
    
}
