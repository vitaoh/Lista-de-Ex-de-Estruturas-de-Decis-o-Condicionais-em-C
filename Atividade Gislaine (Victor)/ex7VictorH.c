#include <stdio.h>

void lerDados(int *i, float *a, float *b, float *c)
{
    printf("\nEscreva um numero inteiro e positivo:\n");
    scanf("%i", i);
    printf("Agora escreva 3 numeros:\n");
    scanf("%f", a);
    scanf("%f", b);
    scanf("%f", c);
}

int main()
{
    int i;
    float a, b, c, menor, medio ,maior;
    lerDados(&i, &a, &b, &c);
    if (a > b && a > c)
    {
        maior = a;
    }
    else if (b > c)
    {
        maior = b;
    }
    else
    {
        maior = c;
    }
    if (a < b && a < c)
    {
        menor = a;
    }
    else if (b < c)
    {
        menor = b;
    }
    else
    {
        menor = c;
    }
    if (maior == a && menor == c)
    {
        medio = b;
    }
    else if (maior == b && menor == c)
    {
        medio = a;
    }
    else
    {
        medio = c;
    }
    
    switch (i)
    {
    case 1:
        printf("%.2f, %.2f, %.2f", menor, medio, maior);
        break;
    case 2:
        printf("%.2f, %.2f, %.2f", maior, medio, menor);
        break;
    case 3:
        printf("%.2f, %.2f, %.2f", medio, maior, menor);
        break;
    default:
        break;
    }
    return 0;
}