#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main()
{
    int i;
    float tma, vpl_final;
    float fc[4], vpl[4];

    // recebe o valor da tma
    printf("Insira a TMA(em porcentagem): ");
    scanf("%f", &tma);
    tma = tma / 100; // converte de porcentagem para decimal
    tma = tma + 1;

    // recebe os valores de cada periodo
    for (i=0; i < 4; i++)
    {
        printf("\nFluxo de caixa do periodo %d: ", i+1);
        scanf("%f", &fc[i]);
    }

    // calcula o vpl
    for (i=0; i < 4; i++)
        vpl[i] = fc[i] / pow(tma, i+1);
    vpl_final = vpl[0] + vpl[1] + vpl[2] + vpl[3]; // somatoria

    // imprime o vpl
    printf("Valor do VPL: %.2f", vpl_final);

    // verifica se o investimento e viavel
    if (vpl > 0)
        printf("\nO investimento e viavel.");
    else
        printf("\nO investimento nao e viavel.");

}
