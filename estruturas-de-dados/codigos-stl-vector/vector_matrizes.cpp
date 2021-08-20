#include<stdio.h>
#include<vector>

using std::vector;


void preencher_matriz(vector< vector<int> >& v){
	for(unsigned int i = 0; i< v.size(); i++){
		for(unsigned int j = 0; j< v[i].size(); j++){
			scanf("%d", &v[i][j]);
		}
	}
}


int main(){

	int n;
	int m;
	scanf("%d%d", &n, &m);
	vector< vector<int> > vetor (n, vector<int>(m));
	preencher_matriz(vetor);
	
	for(unsigned int i = 0; i< vetor.size(); i++){
		for(unsigned int j = 0; j< vetor[i].size(); j++){
			printf("%d ", vetor[i][j]);
		}
	}
	
	return 0;
}



