#include <stdio.h>

void possibilidade(int num)
{
    int a = num / 10000;
    int b = (num / 1000) % 10;
    int c = (num / 10) % 10;
    int d = num % 10;

    if (a == d && b == c)
    {
        printf("\nO numero e um palindro\n\n");
    }
    else 
    {
        printf("\nO numero nao e um palindro\n\n");
    }
    
    
}

int main ()
{
    int num;
    printf("\nEscreva um numero inteiro de 5 digitos:\n\n");
    scanf("%i", &num);

    possibilidade(num);

    return 0;
}