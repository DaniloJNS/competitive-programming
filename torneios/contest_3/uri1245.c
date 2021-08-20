#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


struct pos_bota
{
    int numero;
    int cont_Esquerdo;
    int cont_Direito;
};
typedef struct pos_bota Tpos_bota;

Tpos_bota num[32];

int count;

void new_number(int pos_numero, char pe)
{
    int verificador=-1;

        for (int i = 0; i <= count; i++)
        {
            if(pos_numero == num[i].numero)
            {
                if (pe == 'E')
                    num[i].cont_Esquerdo++;

                else
                    num[i].cont_Direito++;
                    
                verificador=0;

                break;
            }
        }

        if(verificador==-1)
        {
            count++;

            num[count].numero = pos_numero;

            if (pe == 'E')
                num[count].cont_Esquerdo=1;

            else
                num[count].cont_Direito=1;
        }

}


int main()
{
    int qtdTeste;


    while (scanf("%d", &qtdTeste) != EOF)
    {

        count=0;

        for (int i=0; i<32; i++ ) num[i].cont_Esquerdo = num[i].cont_Direito = 0;

        if(qtdTeste == 0) break;

        int numBota, pares;
        char peBota;
        
        for(int i = 0; i < qtdTeste; i++)
        {
           scanf("%d %c", &numBota, &peBota);
           new_number(numBota, peBota);
        }

        pares=0;

        for (int i = 1; i <= count; i++)
        {
            if (num[i].cont_Esquerdo > 0 && num[i].cont_Direito > 0)
            {
                if((num[i].cont_Esquerdo >= num[i].cont_Direito) )
                    pares = pares + num[i].cont_Direito;

                else
                    pares = pares + num[i].cont_Esquerdo;    
            }
        }
        
        printf("%d\n", pares);
        
    }

}