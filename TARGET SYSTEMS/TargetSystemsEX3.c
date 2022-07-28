//OBS. Em C não é possivel fazer a importação de um JSON de forma eficiente, então defini um array de valores, porém o mesmo algoritmo pode ser utilizado para um JSON em outra linguagem.
#include <stdio.h>

int main(void)
{
    //declaração de variaveis
    float faturamento[30]={188,0,18800,461,2789,13,3430,3744,4356,3747,2702,2075,3397,1521,2100,4103,1908,2949,3519,2463,4142,4137,2672,605,582,1546,3994,1506,2702,3423};
    float menor=faturamento[0],maior=faturamento[0],total=0,mediaMensal;
    int contador,maiorQueAMediaMensal=0,auxiliar=0;

    //Calculando o valor total faturado em um mes e quantas vezes o valor foi nulo.
    for(contador=0;contador<=30;contador++){
        total=total+faturamento[contador];
        if(faturamento[contador]==0)
        {
            auxiliar++;
        }
    }
    //Calculando a media mensal com base no valor anterior e reduzindo de 30 dias o numero de dias em que o faturamento foi nulo.
    mediaMensal= total/(30-auxiliar);
    //Processamento do maior e menor valor faturado e da quantidade de dias em que o valor faturado foi menor que a média mensal
    for(contador=0;contador<30;contador++){
            if(menor>faturamento[contador]){
                menor=faturamento[contador];
            }
            if(maior<faturamento[contador]){
                maior=faturamento[contador];
            }
            if(faturamento[contador]>mediaMensal)
            {
                maiorQueAMediaMensal++;
            }
    }
    //Exibindo os valores obtidos
    printf("Menor valor faturado: R$ %.2f\n",menor);
    printf("Maior valor faturado: R$ %.2f\n",maior);
    printf("Numero de dias em que o faturamento foi maior que a media mensal: %d\n",maiorQueAMediaMensal);

    return 0;
}

