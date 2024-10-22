#include<stdio.h>
int main(){
printf("digite dois primeiros numeros do seu ano de nascimento");
int data1;
scanf("%d",&data1);
printf("digite dois ultimos numeros do seu ano de nascimento");
int data2;
scanf("%d",&data2);
int soma;
soma = (data1 + data2);
int resto;
resto = soma % 5;
printf("resto da divisao:%d\n", resto);
if(resto == 0){
 printf("timido");
}
if(resto == 1){
 printf("sonhador");
}
if(resto == 2){
 printf("paquerador");
}
if(resto == 3){
 printf("atraente");
}
if(resto == 4){
 printf("irresistivel");
}
}