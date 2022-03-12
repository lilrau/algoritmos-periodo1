#include<stdio.h>
#include<math.h>

float socio1(float receita)
{
    float prop, ir, adm, final;
    prop = receita * 0.25;
    ir = prop * 0.15;
    adm = prop * 0.10;
    final = prop - ir - adm;
    printf("A proporcao do socio 1 sera R$%.2f\n", final);
    printf("O imposto de renda do socio 1 sera R$%.2f\n", ir);
    printf("A proporcao do socio 1 sera R$%.2f\n", adm);
}

float socio2(float receita)
{
    float prop, ir, adm, final;
    prop = receita * 0.35;
    ir = prop * 0.07;
    adm = prop * 0.15;
    final = prop - ir - adm;
    final = final * pow(1.0046, 2);
    printf("\nA proporcao do socio 2 sera R$%.2f\n", final);
    printf("O imposto de renda do socio 2 sera R$%.2f\n", ir);
    printf("A proporcao do socio 2 sera R$%.2f\n", adm);
}

float socio3(float receita)
{
    float prop, ir, final;
    prop = receita * 0.40;
    ir = prop * 0.15;
    final = prop - ir;
    printf("\nA proporcao do socio 3 sera R$%.2f\n", final);
    printf("O imposto de renda do socio 3 sera R$%.2f\n", ir);
    printf("Nao sera descontada taxa administrativa do socio 3");
}

void main()
{
    float receita;
    printf("Insira a receita total:");
    scanf("%f", &receita);

    socio1(receita);
    socio2(receita);
    socio3(receita);
}
