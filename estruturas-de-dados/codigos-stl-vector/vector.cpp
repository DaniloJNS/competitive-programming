#include<stdio.h>
#include<vector>

using std::vector;


int main(){

	vector<int> vetor(3);
	vetor[0] = 1;
	vetor[1] = 2;
	vetor[2] = 3;
	
	vetor[100] = 377;
	printf("Tamanho alocado = %lu\n", vetor.size());
	printf("Posicao 100 = %d\n", vetor[100]);
	
	for(unsigned int i = 0; i< vetor.size(); i++){
		printf("%d - %d\n", i,vetor[i]);
	}
	
	printf("============================\n");
	
	printf("Iterador\n");
	vector<int>::iterator iter;
	for (iter = vetor.begin(); iter != vetor.end(); iter++) {
		printf("%d\n", *iter);
	}
	printf("\n");
	
	
	return 0;
}
