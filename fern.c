 

#include <stdio.h>
int main(){
 printf("nota do 1b");
 float n1;
 scanf("%f",&n1);
 printf("nota do 2b");
 float n2;
 scanf("%f",&n2);
 printf("nota do 3b");
 float n3;
 scanf("%f",&n3);
 printf("nota do 4b");
 float n4;
 scanf("%f",&n4);
 float media;
 media = (n1 + n2 + n3 + n4) / 4;
 if(media < 4 ){
printf("reprovado");
 }
 
 if(media >= 4 && media < 7){
printf("recuperação final");
 }
 
   if(media >= 7){
 printf("aprovado");
   }




 

}           


