#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
	int i=0, cont=0, cont1=0;
	char frase[1051], aux;

	while(frase[0] != '*') {
		scanf(" %[^\n]", frase);
		getchar();
		if(frase[0] == '*') {
			return 0;
		}

		i = 0; 
		cont = 0; 
		cont1 = 0;

		aux = frase[0];

		while(frase[i] != '\0') {
			if(frase[i] == ' ') {
				if(tolower(frase[i+1]) == tolower(aux)) {
					cont1++;
				}

				else if(tolower(frase[i+1]) != tolower(aux)) {
					cont++;
					break;
				}
				cont++;
			}
			i++;
		}

		if((cont1+1) == (cont+1)) {
			printf("Y\n");
		}

		else {
			printf("N\n");
		}
	}

	return 0;
}