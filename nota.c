#include<stdio.h>
int main(){   
 int i, t, nota;
 float soma = 0;
  printf("t de alunos");
  scanf("%d", &t);
   for(i=1; i<=t; i++){
    printf(" informe a nota %d",i);
    scanf("%d", &nota); 
    soma += nota;
   }
    float media;
    media = soma/t;
    printf("media dos bonitos = %.2f",media);
   

}