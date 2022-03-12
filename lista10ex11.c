#include<stdio.h>
#include<stdlib.h>

#define m 3
#define n 4

main()
{
    int mat[m][n];
    int i, j, elementos, nulos=0;
    float esparsidade;

    // recebe os valores de cada elemento da matriz
    for (i=0; i < m; i++)
        for (j=0; j < n; j++)
        {
            printf("elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }

    // imprime na tela a matriz inserida
    for (i=0; i < m; i++)
    {
        for (j=0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // calcula o grau de esparsidade
    for (i=0; i < m; i++)
        for (j=0; j < n; j++)
        {
            if(mat[i][j] == 0)
                nulos = nulos+1;
        }

    elementos = m * n;
    esparsidade = nulos / (float)elementos;

    // imprime o grau de esparsidade
    printf("O grau de esparsidade desta raiz e: %f", esparsidade);
}
