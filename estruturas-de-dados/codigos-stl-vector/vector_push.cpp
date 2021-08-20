#include <stdio.h>
#include <vector>
#include <algorithm>

using std::sort;
using std::vector;


int main()
{
	vector<int> v;

	
	printf("Tamanho do vetor original: %lu\n", v.size());
	
	v.push_back(4);
	v.push_back(2);
	v.push_back(3);
	
	printf("Array preenchido com push_back: \n");
	
	for (unsigned int i = 0; i < v.size(); i++) {
		printf("%d ", v[i]);
	}
	
	
	printf("\n");
	v[0] = 1;
	printf("Substituindo a posição 0 pelo valor 1\n");
	for (unsigned int i = 0; i < v.size(); i++) {
		printf("%d ", v[i]);
	}
	
	
	return 0;
}
