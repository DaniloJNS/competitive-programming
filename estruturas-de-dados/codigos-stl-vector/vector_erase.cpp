#include <iostream>
#include <vector>

using std::vector;

void imprimir_vector(vector<int> vetor){
	vector<int>::iterator iter;
	for (iter = vetor.begin(); iter != vetor.end(); iter++) {
		printf("%d ", *iter);
	}
	printf("\n");
}

int main ()
{
	vector<int> vetor;

	printf("Preenchendo o vetor de 0 até 9\n ");
	for (int i=0; i<=9; i++) 
		vetor.push_back(i);
		
	imprimir_vector(vetor);
	
	
	printf("Início: %d\n", *vetor.begin());
	printf("Fim: %d\n", *(vetor.end()-1));
	
	printf("Acessando o quarto elemento usando a função begin\n");
	printf("%d\n", *(vetor.begin()+3));
	
	printf("Removendo o sexto elemento usando a função erase\n");
	vetor.erase(vetor.begin()+5);
	imprimir_vector(vetor);
	
	printf("Inserindo o valor 100 na oitava posição usando a função insert\n");
	vetor.insert(vetor.begin()+8, 100);
	imprimir_vector(vetor);
	
	


  return 0;
}
