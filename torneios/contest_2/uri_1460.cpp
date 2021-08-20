#include <iostream>
using namespace std;

int main()
{
    int num; 
    int *vetor = NULL; // vetor que será alocado o espaço

    cout << "Digite o tamanho do vetor: \n";
    cin >> num;

    vetor = new int[num];

    int i;

    cout << "Digite os elementos do vetor: "; 
    for(i=0;i<num;i++){
        cin >> vetor[i]; 
    }

    cout << endl;
    cout << "Digite os números " << i << ": "; 

    for(i=0;i<num;i++) {
       cout << vetor[i] << endl;
    }
    
    delete [] vetor;  // Libera o espaço alocado para o vetor
    return 0; 
}