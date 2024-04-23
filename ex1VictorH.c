#include <stdio.h>

int main()
{
    int idadeCresMax = 20;
    int idadeBob = 5;
    int idadeCharlie = 7;

    if (1.1 + (0.025 * (idadeCresMax - idadeBob)) > (1.5 + (0.021 * (idadeCresMax - idadeCharlie))))
    {
        printf("\n\nBob ultrapassara Charlie\n\n\n");
    }
    else
    {
        printf("\n\nBob nao ultrapassara Charlie\n\n\n");
    }

    return 0;
}
