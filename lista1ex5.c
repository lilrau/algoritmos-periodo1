#include<stdio.h>

main()
{
	float a, b, premio, prop, premio1, premio2;
	printf("Quanto o primeiro amigo apostou: ");
	scanf("%f", &a);
	printf("Quanto o segundo amigo apostou: ");
	scanf("%f", &b);
	printf("Qual o valor do prêmio: ");
	scanf("%f", &premio);
	prop = premio / (a + b);
	premio1 = prop * a;
	premio2 = prop * b;
	printf("O primeiro amigo receberá R$%.2f\n"
	       "O segundo amigo receberá R$%.2f", premio1, premio2);
}
