#include <stdio.h>

float armazenar(float salario)
{

    if (salario > 0 && salario <= 400)
    {
        return (salario * 0.15);
    }
    else if (salario > 400 && salario <= 700)
    {
        return (salario * 0.12);
    }
    else if (salario > 700 && salario <= 1000)
    {
        return (salario * 0.10);
    }
    else if (salario > 1000 && salario <= 1800)
    {
        return (salario * 0.07);
    }
    else if (salario > 1800 && salario <= 2500)
    {
        return (salario * 0.04);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int codigo;
    float salario;
    printf("\nVamos calcular seu aumento!\n");
    printf("Primeiro digite seu codigo como funcinario:\n");
    scanf("%i", &codigo);
    printf("\nAgora digite seu salario atual:\n");
    scanf("%f", &salario);

    float aumento = armazenar(salario);
    if (aumento >= 0)
    {
        printf("Seu codigo: %i\n", codigo);
        printf("Salario anterior: %.2f R$\n", salario);
        printf("Aumento: %.2f R$\n", aumento);
        printf("Salario atual com o aumento: %.2f R$\n", salario + aumento);
    }
    else
    {
        printf("\nOpçao invalida!\n");
    }
    return 0;
}