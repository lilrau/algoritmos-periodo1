#include<stdio.h>
#include<math.h>
#define PI 3.1415

main()
{
	float r, v;
	printf("Entre com o valor do raio da esfera: ");
	scanf("%f", &r);
	v = (4 * PI * pow(r, 3)) / 3;
	printf("O volume desta esfera é: %f", v);
}
