#include <stdio.h>

int main ()
{
    int num;
    printf("\nEscreva o mes digitalizado por numero:\n\n");
    scanf("%i", &num);

    switch (num)
    {
    case 1:
        printf("\nJaneiro");
        break;
    case 2:
        printf("\nFevereiro");
        break;
    case 3:
        printf("\nMarco");
        break;
    case 4:
        printf("\nAbril");
        break;
    case 5:
        printf("\nMaio");
        break;
    case 6:
        printf("\nJunho");
        break;
    case 7:
        printf("\nJulio");
        break;
    case 8:
        printf("\nAgosto");
        break;
    case 9:
        printf("\nSetembro");
        break;
    case 10:
        printf("\nOutubro");
        break;
    case 11:
        printf("\nNovembro");
        break;
    case 12:
        printf("\nDezembro");
        break; 
    default: printf("\n\nNumero Invalido!\n\n");
        break;
    }
    return 0;
}