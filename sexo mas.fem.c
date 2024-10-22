#include<stdio.h>
int main(){
printf("informe o sexo");
char sexo;
scanf("%c",&sexo);
printf("digite a sua altura");
float altura;
scanf("%f",&altura);
float pesoi;
if(sexo == 'h'){
 pesoi = 72.7 * altura - 58;
 printf("seu peso ideial e %.2f",pesoi);
}
if(sexo == 'm'){
    pesoi = 62.1 * altura - 44.7;
    printf("seu peso ideial e %.2f",pesoi);
}
}
