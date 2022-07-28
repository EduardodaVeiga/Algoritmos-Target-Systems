#include <stdio.h>

int main(void)
{
    //Declaração de variaveis
   float saoPaulo=67836.43, rioDeJaneiro=36678.66, minasGerais=29229.88, espiritoSanto=27165.48, outros=19849.53, total;

   //Calculando o total para facilitar a obtenção da porcentagem unitária
   total=saoPaulo+rioDeJaneiro+minasGerais+espiritoSanto+outros;

   //Exibindo os valores
   printf("Percentual de participacao de SP: %2.f\n",100*saoPaulo/total);
   printf("Percentual de participacao de RJ: %2.f\n",100*rioDeJaneiro/total);
   printf("Percentual de participacao de MG: %2.f\n",100*minasGerais/total);
   printf("Percentual de participacao de ES: %2.f\n",100*espiritoSanto/total);
   printf("Percentual de participacao de outros estados: %2.f\n",100*outros/total);

   return 0;
}
