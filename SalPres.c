#include<stdio.h>
#include<locale.h>

int main(){

setlocale(LC_ALL , "Portuguese");

float Sal,Pres;

printf("Digite o Valor Do Seu Salário:");
scanf("%f",&Sal);
printf("Digite o Valor Da Prestaçao do Empréstimo:");
scanf("%f",&Pres);


if(Pres >(Sal * 20/100){
Printf("Empréstimo não concedido.");
}
else{
Printf("Empréstimo concedido.");
}
return 0;
}
