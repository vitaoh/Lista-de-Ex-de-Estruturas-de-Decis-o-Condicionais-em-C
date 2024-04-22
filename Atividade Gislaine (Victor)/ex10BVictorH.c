#include <stdio.h>

int main ()
{
    int data;
    printf("\nEscreva data nesse formato ddmmaaaa:\n");
    scanf("%d", &data);
    int dia = data / 1000000;
    int mes = (data / 10000) % 100;
    int ano = data % 10000;


    if (dia > 31 || dia < 1)
    {
        printf("\nData invalida %i/%i/%i!\n", dia, mes, ano);
        return 0;
    }
    else
    if (mes > 12 || mes == 0)
    {
        printf("\nData invalida %i/%i/%i!\n", dia, mes, ano);
        return 0;
    }
    else
    {
        printf("Data valida: %i/%i/%i!\n", dia, mes, ano);
    }
    return 0;
}