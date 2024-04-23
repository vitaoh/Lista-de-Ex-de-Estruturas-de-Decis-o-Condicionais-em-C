#include <stdio.h>
int main ()
{
    int a,b,c,d;
    printf("Escreva 4 numeros inteiros:\n");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);

    if (a % 2 == 0 || a % 3 == 0)
    {
        printf("\n%i\n", a);
    }
    if (b % 2 == 0 || b % 3 == 0)
    {
        printf("\n%i\n", b);
    }
    if (c % 2 == 0 || c % 3 == 0)
    {
        printf("\n%i\n", c);
    }
    if (d % 2 == 0 || d % 3 == 0)
    {
        printf("\n%i\n", d);
    }
    if (a % 2 != 0 && a % 3 != 0 && b % 2 != 0 && b % 3 != 0 && c % 2 != 0 && c % 3 != 0 && d % 2 != 0 && d % 3 != 0)  
    {
        printf("\n\nNenhum dos 4 numeros sao divisiveis por 2 ou 3!\n\n");
    }
    
    return 0;
}