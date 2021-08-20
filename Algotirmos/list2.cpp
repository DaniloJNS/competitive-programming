# include<iostream>
# include<list>
# include<vector>


using namespace std;

int main()
{
	list< double > l1 (5, 0.0); // uma lista com 5 vezes o valor 0.0
	double p = 1.0;
	// atribuicao de cada elemento da lista l1, pg com fator 2
	
	for (list< double >::iterator ptr = l1.begin(); ptr != l1.end(); ptr++) {
		*ptr = p;
		p *= 2.;
	}
	// impressao dos elementos da lista l1
	cout << "Conteúdo de l1: ";
	for (list< double >::iterator ptr = l1.begin(); ptr != l1.end(); ptr++) {
		cout << * ptr << " ";
	}
	cout << endl;
	
	cout << "Primeiro e último elemento da lista: "; 	
	cout << l1.front () << " " << l1.back () << endl;
	
	
	cout << "Iterando inversamente de l1: ";
	for (list<double>::reverse_iterator ptr=l1.rbegin(); ptr!=l1.rend(); ptr++)
		cout << *ptr << " ";

	cout << '\n';
	
	list< double >::iterator ptr = l1.begin();
	cout<< "Posicao .begin(): ";	
	cout << *ptr << endl;
	cout <<"Avançando 3 posições a partir de .begin(): ";
	advance(ptr, 3); 
	cout << *ptr << endl;
	ptr++;
	cout <<"Avançando mais uma posição com ++: ";
	cout << *ptr << endl;
	
	
	return 0 ;
}
