#include <stdio.h>

int main ()
{
    float din;
    printf("\nQuanto de dinheiro possui em R$ para a viagem:\n");
    scanf("%f", &din);
    printf("\nSeu dinheiro: %.2f Dolars!\n", din / 5.2);
    printf("Seu dinheiro: %.2f Euros!\n", din / 5.6);
    return 0;
}