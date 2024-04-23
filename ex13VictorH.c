#include <stdio.h>

void result(int horas)
{
    if (horas < 600)
    {
        printf("\nParabens!!\n");
        printf("Voce recebeu um premio de R$ 100,00!\n\n");
    }
    else if (horas < 1200)
    {
        printf("\nParabens!!\n");
        printf("Voce recebeu um premio de R$ 200,00!\n\n");
    }
    else if (horas < 1800)
    {
        printf("\nParabens!!\n");
        printf("Voce recebeu um premio de R$ 300,00!\n\n");
    }
    else if (horas < 2400)
    {
        printf("\nParabens!!\n");
        printf("Voce recebeu um premio de R$ 400,00!\n\n");
    }
    else
    {
        printf("\nParabens!!\n");
        printf("Voce recebeu um premio de R$ 500,00!\n\n");
    }
}

int main ()
{
    char nome[20];
    int horasExtra, horasAusente, horas;
    printf("\n\nDigite (nesta ordem) seu nome, horas de trabalho extra e horas ausencia:\n");
    scanf("%s %i %i", nome, &horasExtra, &horasAusente);
    if (horasAusente < 0 || horasExtra < 0)
    {
        printf("\n\nInformacoes incorretas!\n\n");
        return 0;
    }
    else
    {
    horas = horasExtra - (2/3 * (horasAusente));

    result(horas);

    return 0;
    }
}