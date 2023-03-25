#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL , "Portuguese");

int Num1,Num2;

printf("Digite O Primeiro Numero:");
scanf("%d",&Num1);
printf("Digite O Segundo Numero:");
scanf("%d",&Num2);

if(Num1 > Num2){

printf("O numero %d é maior.",Num1);

}
else{
printf("O numero %d é maior.",Num2);
}

return 0;

}
