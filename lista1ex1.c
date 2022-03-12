lista1ex1.c
#include<stdio.h>

main()
{
	float a = 0, b = 0, c = 0;
	printf("Insira o primeiro valor: ");
	scanf("%f", &a);
	printf("Insira o segundo valor: ");
	scanf("%f", &b);
	c = (a + b) / 2;
	printf("A média entre %f e %f vale %f.", a, b, c);
}
