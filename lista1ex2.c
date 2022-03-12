#include<stdio.h>
#define GAL  4.54609

main()
{
	int g;
	printf("Entre com a quantidade de galões: ");
	scanf("%d", &g);
	printf("%d galões equivalem a %f litros.", g, g * GAL);
}
