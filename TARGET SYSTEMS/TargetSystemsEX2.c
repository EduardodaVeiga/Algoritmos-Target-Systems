#include <stdio.h>

int main(void)
{
    int x=1,conta1,a=0,b=1,cont=1;
    printf("Informe um valor entre 0 e 100: ");
    scanf("%d", &x);//coleta do valor que deseja processar


    while(conta1<=x){
        conta1=a+b;
        a=b;
        b=conta1;
        if(conta1==x)
    {
        printf("o valor faz parte da sequencia fibonacci");
        cont++;
    }/*Processamento do valor, definimos o limite para a estrutura de repeti��o e fazemos o processamento at� o valor desejado.Caso o valor seja encontrado
    um contador � ativado informando que o valor existe na sequencia.*/
    }
    if(cont==1)
    {
        printf("o valor nao faz parte da sequencia fibonacci");
    }
    //Aqui � conferido se o contador foi ativado ou n�o, caso n�o tenha sido, informa-se que o valor n�o est� na sequencia.

    return 0;
}
