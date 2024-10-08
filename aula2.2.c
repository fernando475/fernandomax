#include<stdio.h>
 int main(){
    printf("irforme a distancia em km:");
     float distancia;
   scanf("%f",&distancia);
   printf("informe a quantidade de gasolina em l:");
    float litros;
   scanf("%f",&litros);
    float consumo = distancia / (litros);
   printf("%f", consumo );
   }
