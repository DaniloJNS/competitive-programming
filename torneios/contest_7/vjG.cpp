#include <bits/stdc++.h>

using namespace std;



bool solver(int n,int ladoReferencia, int ladoA, int ladoB) {

    int espacosLivres = n - 2;
    
    if(espacosLivres >= ladoReferencia)
        return false;

    if(ladoA==0 && ladoB ==0) 
        return true;
    
    if((ladoA==0 || ladoB==0) && (n == ladoReferencia))  
        return true;

    return false;
}
bool solverTwo(int n,int ladoReferencia, int ladoA, int ladoB) {

    if(ladoReferencia>=2)
        return false;

    else if(ladoA==n && ladoB == n) 
        return true;

    return false;
}
bool solverTree(int n,int ladoReferencia, int ladoA, int ladoB, int ladoOposto) {

    if(n-2 >= ladoReferencia)
        return false;

    else if(ladoOposto == ladoReferencia){

        if((ladoA == 0 && ladoB <2) || (ladoB ==0 && ladoA <2))
            return true;

        else
            return false;
    }
    else if((ladoReferencia==n && ladoOposto > n-2) || ladoOposto == n) {

        if((ladoA > 1 && ladoB > 0) || (ladoB > 1 && ladoA > 0) )
            return false;

        else  
            return true;
    }

    return false;
}


int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, U, R, D ,L, numCasos;
    
    cin >> numCasos;

    while (numCasos--)
    {
        cin >> n >> U >> R >> D >> L;
        
        if(U==0 && R == 0 && D==0 && L==0){
            cout<<"YES"<<endl;
            continue;
        }
        else if(solver(n, U, R, L) || solver(n, R, U, D) 
        || solver(n, L, U, D) || solver(n, D, R, L)) {
            cout<<"NO"<<endl;
            continue;
        }
        else if(solverTwo(n, U, R, L) || solverTwo(n, R, U, D) 
        || solverTwo(n, L, U, D) || solverTwo(n, D, R, L)) {
            cout<<"NO"<<endl;            
            continue;
        }
        else if(solverTree(n, U, R, L, D) || solverTree(n, R, U, D, L) 
        || solverTree(n, L, U, D, R) || solverTree(n, D, R, L, U)) {
            cout<<"NO"<<endl;
            continue;
        }        
            cout<<"YES"<<endl;

    }
}