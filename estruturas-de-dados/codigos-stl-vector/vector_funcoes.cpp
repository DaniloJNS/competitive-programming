#include <stdio.h>
//#include<stdlib.h>
#include <vector>
#include <algorithm>

using std::sort;
using std::vector;

void preencher_vector(vector<int>& v);
void imprimir_vector(vector<int> vetor);

bool comp_inverso(int i,int j) { return (i>j); }

int main(){

	vector<int> vetor(5);
	preencher_vector(vetor);
	imprimir_vector(vetor);
	
	vector<int> copia(vetor);
	
	
	printf("Ordenando o vetor\n");
	sort(vetor.begin(), vetor.end());
	imprimir_vector(vetor);
	
	printf("Ordenando o vetor cópia a partir da posição 1\n");
	sort(copia.begin()+1, copia.end());
	imprimir_vector(copia);
	
	printf("Ordenando o vetor de forma decrescente\n");
	sort(vetor.begin(), vetor.end(), comp_inverso);
	imprimir_vector(vetor);
	
	return 0;
}

void imprimir_vector(vector<int> vetor){
	vector<int>::iterator iter;
	for (iter = vetor.begin(); iter != vetor.end(); iter++) {
		printf("%d ", *iter);
	}
	printf("\n");
}

void preencher_vector(vector<int>& v){
	for(unsigned int i = 0; i< v.size(); i++){
		scanf("%d", &v[i]);
	}
}
