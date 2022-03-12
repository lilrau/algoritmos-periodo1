#include<stdio.h>

main()
{
	int n, h, m, s, resto;
	printf("Insira um valor em segundos: ");
	scanf("%d", &n);
	h = n / 3600;
	resto = n % 3600;
	m = resto / 60;
	s = resto % 60;
	printf("%d segundos são %d horas, %d minutos e %d segundos", n, h, m, s);
}
