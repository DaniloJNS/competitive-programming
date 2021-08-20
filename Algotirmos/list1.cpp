#include<iostream>
#include<list>

using namespace std;

// Funcao principal
int main()
{
	//
	// Uso de "using" para evitar escrever o prefixo std::
	//
	list< double > l1(5, 1.0); // uma lista com 5 vezes o valor 1.0
	list< double > l2 (l1);// uma lista copia de l1
	list< int > l3;	// uma lista vazia (de inteiros)

	cout << "Tamanho da lista l1: " << l1.size() << ". " << (l1.empty() ? "Eh vazia." : "Nao eh vazia." ) << endl;
	cout << "Tamanho da lista l2: " << l2.size() << ". "<< (l2.empty() ? "Eh vazia." : "Nao eh vazia." ) << endl;
	cout << "Tamanho da lista l3: " << l3.size() << ". " << (l3.empty() ? "Eh vazia." : "Nao eh vazia." ) << endl;
	return 0 ;
}
