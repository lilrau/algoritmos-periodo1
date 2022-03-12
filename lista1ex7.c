#include<stdio.h>

main()
{
	float m1, m2, mt, p;
	printf("Entre com o comprimento do cômodo: ");
	scanf("%f", &m1);
	printf("Entre com a largura do cômodo: ");
	scanf("%f", &m2);
	mt = m1 * m2;
	p = 18 * mt;
	printf("O cômodo possui %fm² e precisa de %f watts de potência de iluminação.", mt, p);
}
