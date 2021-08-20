# include <iostream>
# include<list>


using namespace std;

// Funcao principal
int main()
{

	int i;
	list< int > l1;
	list< int >::iterator p;
	
	for (i = 0; i < 5; i++) {
		l1.push_back (i);
	}
	
	// impressao do conteudo de l1
	cout << "Conteúdo de l1 (push_front): ";
	for (p = l1.begin(); p != l1.end(); p++) {
		cout << *p << " "; 
	}
	cout << "\n";
	
	list< int > l3(l1);
	
	
	p = l3.begin();
	
	//Avançando l3.size()/2 posições
	advance(p, l3.size()/2);
	cout << "Inserindo o valor 1000 na posição size()/2: ";
	list< int >::iterator p2 = l3.insert(p, 1000);
	
	for (p = l3.begin(); p != l3.end(); p++) {
		cout << *p << " "  ;
	}
	cout << endl;
	
	cout << "Conteúdo do iterator é valor inserido: " << *p2 << "\n";
	
	cout << "Removendo a segunda posição com erase ";
	p = l3.begin();
	advance(p,1);
	p2 = l3.erase(p);
	
	
	for (p = l3.begin(); p != l3.end(); p++) {
		cout << *p << " "  ;
	}
	cout << endl;
	
	cout << "Conteúdo do iterator é o valor que ocupou a posição inserida: " << *p2 << "\n";
	
	cout << "Removendo o elemento de valor 3: ";
	l3.remove(3);

	for (p = l3.begin(); p != l3.end(); p++) {
		cout << *p << " "  ;
	}
	
	cout << endl;
	cout << "Conteúdo da posicao .end() é o tamanho: " << *l3.end() << "\n";
	
	
	

	
	
	return 0 ;
}
