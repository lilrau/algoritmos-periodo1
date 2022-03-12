#include<stdio.h>
#include<stdbool.h>

main()
{
    int regiao;
    float preco;

    scanf("%f", &preco);
    scanf("%d", &regiao);

    if(regiao == 1)
    {
        printf("Sul");
    }

    if(regiao == 2)
    {
        printf("Norte");
    }

    if(regiao == 3)
    {
        printf("Leste");
    }

    if(regiao == 4)
    {
        printf("Oeste");
    }

    if(regiao == 5 || regiao == 6)
    {
        printf("Nordeste");
    }

    if(regiao >=7 && regiao <= 9)
    {
        printf("Sudeste");
    }

    if(regiao >=10 && regiao <= 20)
    {
        printf("Centro Oeste");
    }

    if(regiao >=21 && regiao <= 50)
    {
        printf("Nordeste");
    }

    if(regiao > 50)
    {
        printf("Importado");
    }
}
