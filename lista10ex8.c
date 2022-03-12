#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

#define m 2
#define n 3

void alteraMatriz(int matl[m][n], int matp[m][n])
{
    int i, j;
    for(i=0; i < tam; i++)
        for(j=0; j < tam; j++)
    {
        if(matl[i][j] % 2 == 0)
            matp[i][j] = 1 / (float)matl[1][j];
        else
            matp[i][j] = pow(matl[i][j], 2);
        //printf("\n%d", matl[i][j]);
        //printf("\n%f", matp[i][j]);
    }
}

main()
{

}
