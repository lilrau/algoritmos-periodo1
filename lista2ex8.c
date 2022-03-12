#include<stdio.h>
#include<math.h>
#include<stdbool.h>

main()
{
    int percentual;
    float salario=0, salario_novo=0;
    scanf("%f", &salario);
    if (salario <= 300)
    {
        percentual = 10;
        salario_novo = salario * 1.1;
        printf("%.2f", salario_novo);
    }
    if (salario <= 600 && salario > 300)
    {
        percentual = 11;
        salario_novo = salario * 1.11;
        printf("%.2f", salario_novo);
    }
    if (salario <= 900 && salario > 600)
    {
        percentual = 12;
        salario_novo = salario * 1.12;
        printf("%.2f", salario_novo);
    }
    if (salario <= 1500 && salario > 900)
    {
        percentual = 6;
        salario_novo = salario * 1.06;
        printf("%.2f", salario_novo);
    }
    if (salario <= 2000 && salario > 1500)
    {
        percentual = 3;
        salario_novo = salario * 1.03;
        printf("%.2f", salario_novo);
    }
    if (salario > 2000)
    {
        salario_novo = salario;
        printf("sem aumento");
    }
}
