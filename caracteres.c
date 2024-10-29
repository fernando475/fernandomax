#include<stdio.h>
int main(){
 printf("Digite o primeiro numero:");
 float num1;
 scanf("%f",&num1);
 printf("Digite o segumdo mumero:");
 float num2;
 scanf("%f",&num2);
 printf("Digite o  caractere:");
 char carac ;
 scanf(" %c",&carac);
 if(carac == '+'){
    float soma;
    soma = num1 + num2;
    printf("%f",soma );
 }
   if(carac == '-'){
    float sub;
    sub = num1 - num2;
    printf("%f",sub);
 }
  if(carac == '*'){
    float mult;
    mult = num1 * num2;
    printf("%f",mult );
 }
 if(carac == '/'){
    float divid;
    divid = num1 / num2;
    printf("%f",divid);
 }
}
 
  




