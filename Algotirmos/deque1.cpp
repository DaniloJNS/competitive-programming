#include <iostream>
#include <deque>

using namespace std;

template < typename T>
//Método genérico para imprimir deque de qualquer tipo
void imprimir(deque<T> d){
	
	for(typename deque<T>::iterator it = d.begin(); it != d.end(); ++it){
		cout << *it << " ";
	}	
	cout << endl;
}

int main(){
	
		deque<int> d1;
		deque<double> d2(10,1.0);
		deque<double> d3(d2);
		deque<double> d4(d2.begin()+3, d2.end());
		
		cout << "deque d1 (vazio): ";
		imprimir(d1);
		cout << "deque d2 (1.0 repetido 10 vezes): ";
		imprimir(d2);
		cout << "deque d3 (cópia de d2): ";
		imprimir(d3);
		cout << "deque d4 (deque d2 da posição 3 até o final): ";
		imprimir(d4);
		
		
		
	
		
		cout << "Inserindo de 0 a 4 em d1. Valor positivo na atrás e negativo na frente:\n";
		for(int i =0; i<5; i++){
				d1.push_back(i);
				d1.push_front(-i);
		}
		
		imprimir(d1);
		
		cout << "Removendo elementos em d1 usando pop_back e pop_front até a lista ficar vazia:\n";
		while (!d1.empty()) {
			d1.pop_back();
			d1.pop_front();
			imprimir(d1);
		}
		
		cout << "Acessando e modificando os elementos do deque d2 usando []:\n";
		for (unsigned int i = 0; i < d2.size(); i++){
			d2[i] = i;
			cout << d2.at(i) << " ";
			
		}
		cout << endl;
		
	
		cout << "Removendo o elemento na posição início + 3 :\n";
		d2.erase(d2.begin()+3);
		imprimir(d2);
		
		
		
}


