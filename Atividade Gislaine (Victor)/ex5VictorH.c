#include <stdio.h>
#define minMAX 60
#define horaMAX 24

int main()
{
    int horaI, minI, horaT, minT, horaF, minF;
    printf("\nLembrando que o tempo máximo de um jogo é de 24 horas!");
    printf("\nEscreva a hora de inicio do jogo:\n");
    scanf("%i", &horaI);
    if (horaI >= horaMAX)
    {
        printf("Opção inválida\n");
        return 0;
    }
    printf("Escreva o minuto de inicio:\n");
    scanf("%i", &minI);
    if (minI >= minMAX)
    {
        printf("Opção inválida\n");
        return 0;
    }
    printf("\nEscreva a hora de termino do jogo:\n");
    scanf("%i", &horaT);
    if (horaT >= horaMAX)
    {
        printf("Opção inválida\n");
        return 0;
    }
    printf("Escreva o minuto de termino:\n");
    scanf("%i", &minT);
    if (minI >= minMAX)
    {
        printf("Opção inválida\n");
        return 0;
    }

    horaF = horaT - horaI;
    minF = minT - minI;

    if (minF < 0)
    {
        minF += minMAX;
        horaF --;
    }
    if (horaF < 0)
    {
        horaF += horaMAX;
    }
    
    if (horaF > horaMAX)
    {
        printf("O jogo passou de 24 horas");
        return 0;
    }
    printf("\nO jogo durou exatos %i horas e %i minutos!\n", horaF, minF);
    return 0;
} 
