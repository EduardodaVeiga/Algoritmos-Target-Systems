//OBS. O algoritmo possui a feature de repetição sem sair do exe, para facilitar o teste de mais de uma palavra.
#include <stdio.h>

int main(void)
{
    //Declaração de variáveis
    char resposta,texto[150];
    int x,cont,y;
    do
    {
        x=0;
        cont=0;
        printf("Informe um texo de ate 150 caracteres: ");
        fflush(stdin);
        gets(texto); //Obtendo texto inserido
        while(texto[x]!='\0') //Contando os caracteres da entrada
        {
            x++;
        }
        for(y=x;y>=0;y--)
        {
            printf("%c",texto[y]); // Mostrando os caracteres em ordem inversa
        }
        printf("\nDeseja repetir o programa(S/s): ");
        fflush(stdin);
        scanf("%c", &resposta);
    }while(resposta=='S' || resposta=='s'); //Verificando se o usuário deseja repetir o teste.

    return 0;
}

