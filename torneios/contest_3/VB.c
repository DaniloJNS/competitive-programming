#include <stdio.h>

int main()
{
    long int qtdViagens, qtdPacoteBilhete, custoBilheteUnidade, custoBilhetePacote;
    long int custoParcialPacote = 0, custoParcialUnidade;
    float precoMedioPacote;

    scanf("%ld %ld %ld %ld", &qtdViagens, &qtdPacoteBilhete, &custoBilheteUnidade, &custoBilhetePacote);

    precoMedioPacote = custoBilhetePacote / qtdPacoteBilhete;

    if(precoMedioPacote >= custoBilheteUnidade)
    {
            custoParcialUnidade = qtdViagens * custoBilheteUnidade;

            printf("%ld\n", custoParcialUnidade);

            return 0;

    }

    else
    {
    
    custoParcialPacote = (qtdViagens/qtdPacoteBilhete)*custoBilhetePacote;

    if(qtdViagens%qtdPacoteBilhete>0)
    {
        if((qtdViagens%qtdPacoteBilhete)*custoBilheteUnidade >= custoBilhetePacote)
                custoParcialPacote+=custoBilhetePacote;

        else
                custoParcialPacote += (qtdViagens%qtdPacoteBilhete)*custoBilheteUnidade;

    }

    custoParcialUnidade = qtdViagens * custoBilheteUnidade;

    if(custoParcialPacote > custoParcialUnidade)
            printf("%ld\n", custoParcialUnidade);
    
    else if (custoParcialUnidade >= custoParcialPacote)
            printf("%ld\n", custoParcialPacote); 
    
    return 0; 
    }
}