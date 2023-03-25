#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL , "Portuguese");

int Num;

printf("Digite Um Numero:");
scanf("%d",&Num);

 if(Num % 2 == 0){

printf("\nO numero %d é par");

 }
 else{

 printf("\nO numero %d é impar");

 }



return 0;

}
