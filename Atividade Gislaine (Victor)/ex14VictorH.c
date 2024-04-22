#include <stdio.h>

int main ()
{
    float preco;
    int codigo;
    printf("\n\nEscreva o preco da compra:\n");
    scanf("%f", &preco);
    printf("\nCodigo | Condicaoo de pagamento\n");
    printf("1 | A vista em dinheiro ou cheque, recebe 0,10 de desconto.\n");
    printf("2 | A vista no cartao de crrdito, recebe 0,05 de desconto.\n");
    printf("3 | Em 2 vezes, preco normal da etiqueta sem juros.\n");
    printf("4 | Em 3 vezes, preco normal da etiqueta mais juros de 0.10.\n");
    printf("Escolha o codigo requerido para a realizacao do pagamento:\n\n");
    scanf("%i", &codigo);

    switch (codigo)
    {
    case 1:
        printf("\nO preco total a pagar sera de %.2f R$\n", preco * 0.9);
        break;
    case 2:
        printf("\nO preco total a pagar sera de %.2f R$\n", preco * 0.95);
        break;
    case 3:
        printf("\nO preco total a pagar sera de %.2f R$\n", preco);
        break;
    case 4:
        printf("\nO preco total a pagar sera de %.2f R$\n", preco * 1.1);
        break;
    default:
        printf("\n\nCodigo invalido!\n\n");
        break;
    }

    return 0;
}