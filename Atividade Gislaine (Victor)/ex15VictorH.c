#include <stdio.h>

int main ()
{
    int idade;
    printf("\nEscreva a sua idade:\n");
    scanf("%i", &idade);
    if (idade < 1 || idade > 120)
    {
        printf("\nIdade invalida!\n");
    }
    else
    {
        printf("\nSua idade em meses: %i\n", idade * 12);
        printf("Sua idade em dias: %i\n\n", idade * 365);
    }


    return 0;
}