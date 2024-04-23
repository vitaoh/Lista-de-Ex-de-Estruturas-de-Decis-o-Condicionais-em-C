#include <stdio.h>

int codigo(int cd)
{
    return (cd < 100) ? 1 : 0;
}
int idade(int idd)
{
    return (idd > 60) ? 1 : 0;
}
int sexo(int sx)
{
    return (sx == 2) ? 1 : 0;
}
int salario(int sal)
{
    return (sal >= 1000 && sal <= 2000) ? 1 : 0;
}


int main ()
{
    int cod1, idade1, sexo1, salario1, cod2, idade2, sexo2, salario2, cod3, idade3, sexo3, salario3;
    char nome1[30], nome2[30], nome3[30];
    printf("\nEscreva seu codigo, nome, idade, sexo [1] para Masculino e [2] para Feminino e salario:\n");
    scanf("%i %s %i %i %i", &cod1, nome1, &idade1, &sexo1, &salario1);
    if (cod1 <= 0 || idade1 <= 15 || idade1 > 100 || sexo1 > 2 || sexo1 < 1 || salario1 <= 0)
    {
        printf("\nDados incorretos!\n");
        return 0;
    }
    printf("\nEscreva seu codigo, nome, idade, sexo [1] para Masculino e [2] para Feminino e salario:\n");
    scanf("%i %s %i %i %i", &cod2, nome2, &idade2, &sexo2, &salario2);
    if (cod2 <= 0 || idade2 <= 15 || idade2 > 100 || sexo2 > 2 || sexo2 < 1 || salario2 <= 0)
    {
        printf("\nDados incorretos!\n");
        return 0;
    }
    printf("\nEscreva seu codigo, nome, idade, sexo [1] para Masculino e [2] para Feminino e salario:\n");
    scanf("%i %s %i %i %i", &cod3, nome3, &idade3, &sexo3, &salario3);
    if (cod3 <= 0 || idade3 <= 15 || idade3 > 100 || sexo3 > 2 || sexo3 < 1 || salario3 <= 0)
    {
        printf("\nDados incorretos!\n");
        return 0;
    }

    printf("\n\nFuncionarios com codigo inferior a 100: %d\n", codigo(cod1) + codigo(cod2) + codigo(cod3));
    printf("Funcionarios com idade superior a 60 anos: %d\n", idade(idade1) + idade(idade2) + idade(idade3));
    printf("Funcionarias do sexo feminino: %d\n", sexo(sexo1) + sexo(sexo2) + sexo(sexo3));
    printf("Funcionarios com o salario entre 1000 e 2000 reais: %d\n\n", salario(salario1) + salario(salario2) + salario(salario3));
    return 0;
}