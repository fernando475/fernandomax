#include<stdio.h>
   int main(){ 
    float idade;
    float categoria;
    printf("informe a idade do narrador");
    scanf("&f",&idade);
    if(idade<=10){
    printf("categoria infantil");
   }
    if(idade > 10 && idade <= 17){
     printf("categoria juvenil");
 }  
    if(idade > 17){
    printf ("categoria senioe");

    }
    
 }

