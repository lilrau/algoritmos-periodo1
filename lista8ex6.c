#include<stdio.h>
#include<stdbool.h>

float pot(int base, int exp)
{
     if(exp == 0)
        return 1;
    else
        return (base * pot(base, exp-1));
}

int main()
{
    int base, exp, resultado;
    printf("Entre com a base: ");
    scanf("%d", &base);
    printf("Entre com o expoente: ");
    scanf("%d", &exp);
    resultado = pot(base, exp);
    printf("\n%d elevado a %d e igual a %d", base, exp, resultado);
    return 0;
}
