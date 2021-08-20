#include <iostream>
#include <vector>
#include <utility>
#include <string>

using std::vector;
using std::pair;
using std::make_pair;
using std::string;
using std::cout;

void imprimir_vector(vector<int> vetor){
	vector<int>::iterator iter;
	for (iter = vetor.begin(); iter != vetor.end(); iter++) {
		printf("%d ", *iter);
	}
	printf("\n");
}

int main ()
{
	pair<int, int> p1;
	p1 = make_pair(1,2);
	
	printf("p1 - First: %d\n", p1.first);
	printf("p2 - Second: %d\n", p1.second);
	printf("=============\n");
	
	
	pair<int, int> p2;
	
	p2.first = 10;
	p2.second = 20;
	
	printf("p2 - First: %d\n", p2.first);
	printf("p2 - Second: %d\n", p2.second);
	printf("=============\n");
	
	pair<int, string> p3;
	
	p3.first = 1;
	p3.second = "ABC";
	
	printf("p3 - First: %d\n", p3.first);
	cout << "p3 - Second:" <<  p3.second << "\n";
	printf("=============\n");
	
	
	pair<int, pair<int,double>> p4;
	
	p4.first = 100;
	p4.second.first = 200;
	p4.second.second = 1.5;
	
	printf("p4 - First: %d\n", p4.first);
	printf("p4 - Second.first: %d\n", p4.second.first);
	printf("p4 - Second.second: %lf\n", p4.second.second);
	
	


  return 0;
}
