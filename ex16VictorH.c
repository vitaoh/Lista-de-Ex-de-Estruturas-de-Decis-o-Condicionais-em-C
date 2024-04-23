#include <stdio.h>
#include <math.h>

void Escrever(float a, float b, float c)
{
    float discriminante = ( b * b ) - ( 4 * a * c ), raiz1, raiz2;

    if (a == 0)
    {
        printf("\nNao e uma equacao quadratica. 'a' não pode ser zero.\n");
        return;
    }
    if (discriminante == 0)
    {
        raiz1 = -b/2*a;
        printf ("\n\nRaiz: %f\n", raiz1);
    }
    else if (discriminante < 0)
    {
        printf ("\n\nRaizes Complexas!\n");
    }
    else if (discriminante > 0)
    {
        raiz1 = (-b +sqrt(discriminante))/2*a;
        raiz2 = (-b -sqrt(discriminante))/2*a;
        printf ("Raizes: %.2f, %.2f", raiz1, raiz2);
    }
    
    
}


int main ()
{
    float a, b, c;
    printf("\nEscreva os valores de A, B e C dessa equacao (ax²+ bx + c = 0):\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    Escrever(a, b, c);

    return 0;
}