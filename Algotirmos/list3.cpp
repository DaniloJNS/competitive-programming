# include <iostream>
# include<list>


using namespace std;

// Funcao principal
int main()
{

	int i;
	list< int > l1;
	list< int > l2;
	list< int >::iterator p;
	
	for (i = 0; i < 5; i++) {
		l1.push_back (i);
		l2.push_front (i);
	}
	
	// impressao do conteudo de l1
	cout << "Conteúdo de l1 (push_front): ";
	for (p = l1.begin(); p != l1.end(); p++) {
		cout << *p << " "; 
	}
	cout << "\n";
	
	// impressao do conteudo de l2
	cout << "Conteúdo de l2 (push_back): ";
	for (p = l2.begin(); p != l2.end(); p++) {
		cout << *p << " "  ;
	}
	cout << "\n";
	
	
	cout << "Retirando a cabeça da lista l1: ";
	l1.pop_front();
	
	for (p = l1.begin(); p != l1.end(); p++) {
		cout << *p << " "  ;
	}
	cout << endl;
	
	cout << "Retirando ao fundo da lista l1: ";
	l1.pop_back();
	
	for (p = l1.begin(); p != l1.end(); p++) {
		cout << *p << " "  ;
	}
	cout << endl;
	
	
	return 0 ;
}
