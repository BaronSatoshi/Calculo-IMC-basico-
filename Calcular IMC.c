#include <stdio.h>

int main()
{
 int opcao;
 float altura, peso, IMC;

 printf("-----Calcular seu IMC------\n");
 do{
 printf("Informe sua altura:\n");
 scanf("%f", &altura);
 printf("Informe seu peso:\n");
 scanf("%f", &peso);

 IMC = peso/(altura * altura);
printf("Seu IMC vale %.2f",IMC);

if(IMC < 18.5 || IMC > 24.9 ){
    printf("\nVoce nao esta no peso ideal!");
}
else{
    printf("\nVoce esta no peso ideal!");
    }
    printf("\n\nDeseja efetuar outro calculo IMC?");
    printf("\n(Digite 1 para sim ou 0 para nao)\n ");
    scanf("%i", &opcao);
}while (opcao==1);
system("pause");
return 0;
}
