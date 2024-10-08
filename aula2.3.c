#include<stdio.h>
 int main(){
    printf("irforme o comprimento da sala");
     float comprimento;
   scanf("%f", &comprimento);
   printf("informe a largura da sala:");
    float largura;
   scanf("%f", &largura);
   printf("informe o preco");
   float preco ;
   scanf("%f", &preco);
    float precototal = (comprimento * largura) * preco ;
   printf("%f" ,precototal);
   }
