 #include<stdio.h>
 int main(){
    printf("irforme seu peso em kg:");
     float peso;
   scanf("%f",&peso);
   printf("informe sua altura em metros: ");
    float altura;
   scanf("%f",&altura);
   float imc = peso / (altura * altura );
   printf("%f", imc);

 }


