#include <stdio.h>

void perguntarValores(float *num1, float *num2)
{
    printf("\nEscreva 2 numeros:\n");
    scanf("%f", num1);
    scanf("%f", num2);

}

int main()
{
    float num1, num2, rascunho;
    perguntarValores(&num1, &num2);

    if (num1 > num2)
    {
        rascunho = num1;
        num1 = num2;
        num2 = rascunho;
    }

    printf("%f e %f", num1, num2);
    
    return 0;

}