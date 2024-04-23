#include <stdio.h>

void possivel(int num)
{
    int a = num / 100;
    int b = num % 100;
    int c = a + b;

    if ( c * c == num )
    {
        printf("\nO numero %i possui a seguinte caracteristica:\n%i + %i = %i\n%i^2= %i\n\n", num, a, b, c, c, c*c);    
    }
    else 
    {
        printf("\nO numero %i nao possui a caracteristica de antes ser igual a depois:\n%i + %i = %i\n%i^2= %i\n\n", num, a, b, c, c, c*c);
    }
    
}

int main ()
{
    int num;
    printf("\nEscreva um numero inteiro de 4 digitos:\n\n");
    scanf("%i", &num);

    possivel(num);

    return 0;
}

