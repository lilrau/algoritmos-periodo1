#include<stdio.h>

main()
{
	float ki, kf, cc, dp, gc;
	printf("Insira a quilometragem inicial: ");
	scanf("%f", &ki);
	printf("Insira a quilometragem final: ");
	scanf("%f", &kf);
	printf("Insira o gasto de combustível, em litros: ");
	scanf("%f", &gc);
	dp = kf - ki;
	cc = dp / gc;
	printf("O veículo consumiu %f Km/L.", cc);
}
