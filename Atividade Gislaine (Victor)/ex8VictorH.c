#include <stdio.h>

int main()
{
    int idade;
    printf("\nEscreva sua idade:\n");
    scanf("%i", &idade);
    if (idade < 0 || idade > 130)
    {
        printf("\nIdade inexistente!\n");
    }
    else if (idade < 16)
    {
        printf("\nSua idade nao permite ser eleitor!\n");
    }
    else if (idade >= 18 && idade <= 65)
    {
        printf("\nVoce e eleitor obrigatorio!\n");
    }
    else if (idade >= 65 || idade == 16 || idade == 17)
    printf("\nVoce e eleitor facultativo!\n");
    
    return 0;

}