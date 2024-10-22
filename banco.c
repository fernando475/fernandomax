#include<stdio.h>
int main(){
printf("escolha um :\n 1-saldo\n 2-extrato\n 3-saque\n 4-sair\n");
int num;
scanf("%d",&num);
if( num == 1){
 printf("seu saldo é 1000000000000");
}

if(num == 2){
 printf("seu extrato e 10 rais ");
}

if(num == 3){
 printf("quanto quer sacar ?");
 
}
if(num == 4){
 printf("tchau");

}
}