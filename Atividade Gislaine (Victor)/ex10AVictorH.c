#include <stdio.h>

void JogarDados(char *produto, float valorCompra)
{
    if (valorCompra < 0)
    {
        printf("\nValor inexistente!\n");
    }
    else if (valorCompra < 10)
    {
        printf("\nO produto %s tera um preco total de %.2f R$!\n", produto, valorCompra * 1.7);
    }
    else if (valorCompra < 30)
    {
        printf("\nO produto %s tera um preco total de %.2f R$!\n", produto, valorCompra * 1.5);
    }
    else if (valorCompra < 50)
    {
        printf("\nO produto %s tera um preco total de %.2f R$!\n", produto, valorCompra * 1.4);
    }    
    else
    {
        printf("\nO produto %s tera um preco total de %.2f R$!\n", produto, valorCompra * 1.3);
    }    
}

int main ()
{
    char produto [20];
    float valorCompra;
    printf("\nNome do produto:\n");
    scanf("%s", produto);
    printf("\nValor do produto em R$:\n");
    scanf("%f", &valorCompra);

    JogarDados(produto, valorCompra);

    return 0;
}