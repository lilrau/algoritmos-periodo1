#include<stdio.h>
#include<stdbool.h>

main()
{
    float direito, esquerdo, base;;
    scanf("%f", &direito);;
    scanf("%f", &esquerdo);;
    scanf("%f", &base);
    if (!(direito + esquerdo > base && direito + base > esquerdo && esquerdo + base > direito))
    {
        printf("nao e um triangulo");
    }
    else if (direito == esquerdo && direito == base && esquerdo == base)
    {
        printf("equilatero");
    }
    else if (direito == esquerdo || direito == base || esquerdo == base)
    {
        printf("isosceles");
    }
    else if (direito != esquerdo && direito != base && esquerdo != base)
    {
        printf("escaleno");
    }
}
