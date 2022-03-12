#include<stdio.h>
#include<stdlib.h>

main()
{
    int i, j, k, m, n;

    // le quantas linhas e colunas vao ser utilizadas
    printf("Informe a quntidade de linhas da matriz: ");
    scanf("%d",&m);
    printf("\nInforme a quantidade de colunas da matriz: ");
    scanf("%d",&n);
    printf("\nLogo o vetor tera %d linhas e 1 coluna.\n\n", n);

    float mat[m][n], vet[n][1], resultado[2][1];

    // le os valores de cada elemento da matriz
    for (i=0; i < m; i++)
        for (j=0; j < n; j++)
        {
            printf("Elemento matricial [%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }

    // le os valores de cada elemento do vetor
    for (i=0; i < n; i++)
    {
        printf("Elemento vetorial [%d]: ", i);
        scanf("%f", &vet[0][i]);
    }

    // faz a multiplicacao entre a matriz e o vetor
    for(i=0; i < m; i++)
        for(j=0; j < 1; j++)
            for(k=0; k < n; k++)
                resultado[i][j] += mat[i][k] * vet[k][j];

    // imprime o resultado na tela
    printf("\nA matriz resultante do produto e:\n");
    for (i=0; i < 2; i++)
    {
        for (j=0; j < 1; j++)
        {
            printf("%f ", resultado[i][j]);
        }
        printf("\n");
    }
}
