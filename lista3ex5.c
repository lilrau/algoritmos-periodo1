#include<stdio.h>
#include<stdbool.h>

int main()
{
    float preco, novopreco;
    char categoria;

    scanf("%f", &preco);
    scanf("%s", &categoria);

    if(categoria == 'a' || categoria == 'A')
    {
        novopreco = preco * 1.5;
    }

    else if(categoria == 'b' || categoria == 'B')
    {
        novopreco = preco * 1.25;
    }

    else if(categoria == 'c' || categoria == 'C')
    {
        novopreco = preco * 1.15;
    }

    else
    {
        novopreco = preco * 1.05;
    }

    printf("%.2f", novopreco);
    return 0;
}
