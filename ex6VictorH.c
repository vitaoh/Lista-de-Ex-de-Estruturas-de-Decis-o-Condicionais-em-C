#include <stdio.h>

int main()
{
    float num;
    printf("\n\nEscreva um numero\n");
    scanf("%f", &num);
    if (num > 20)
    {
        printf("%.2f/2 = %.2f", num, num/2);
    }
    else 
    {
        printf("%f = %f", num, num);
    }
    return 0;
}


