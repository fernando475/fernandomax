 #include<stdio.h>
   int main(){
    printf("informe um capital");
     float c;
   scanf("%f",&c);
   printf("informe a taxa de jurus mensal ");
    float j;
   scanf("%f",&j);
   printf("informe um periodo em meses");
    float m;
    scanf("%f",&m);
    float g = pow(1 + j / 100,m);
    float f = c * g ;
     printf("%f",f);
   }

