#include<stdio.h>
#include<stdbool.h>

main()
{
    int sexo;
    float altura, ideal;
    scanf("%f", &altura);
    scanf("%d", &sexo);
    if (sexo == 0)
    {
        ideal = (62.1 * altura) - 44.7;
        printf("%.2f", ideal);
    }
    if (sexo == 1)
    {
        ideal = (72.7 * altura) - 58 ;
        printf("%.2f", ideal);
    }
    if (sexo != 1 && sexo != 0)
    {
        printf("erro");
    }
}
