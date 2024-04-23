#include <stdio.h>

float tipoCarro()
{   
    int tC;
    printf("\nPara isso digite o valor tipo do veiculo [1]Pequeno, [2]Medio, [3]Grande\n");
    scanf("%i", &tC);
    switch (tC)
    {
    case 1:
        return 0.08;
    case 2:
        return 0.12;
    case 3:
        return 0.10;
    default: printf("\nOpcao invalida!\n");
        return 0.00; 
        
    }
}

float regiao()
{
    int reg;
    printf("\nAgora digite o valor por regiao [1]Norte, [2]Sul e Centro-Oeste, [3]MG e ES, [4]SP, [5]RJ\n");
    scanf("%i", &reg);
    switch (reg)
    {
    case 1:
        return 0.03;
    case 2:
        return 0.05;
    case 3:
        return 0.08;
    case 4:
        return 0.10;
    case 5:
        return 0.15;
    default: printf("\nOpcao invalida!\n");
        return 0.00;
    }    
}

int main ()
{   
    float valorCarro, regiaoM, tipoCarroM;
    printf("\nVamos calcular o seu seguro!\n");
    tipoCarroM = tipoCarro();
    if (tipoCarroM == 0.00)
    {
        return 0;
    }
    else
    regiaoM = regiao();
    if (regiaoM)
    {
        return 0;
    }
    else
    printf("\nDigite o valor do seu carro:\n");
    scanf("%f", &valorCarro);
    printf("\nO valor a ser pago por parte da seguradora: %2.f R$\n", valorCarro * regiaoM + valorCarro * tipoCarroM);
    
    return 0;

}