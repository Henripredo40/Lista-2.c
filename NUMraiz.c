#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>

int main(){

setlocale(LC_ALL , "Portuguese");

 int Num;

 printf("Insira Um Numero:");
 scanf("%d",&Num);

 if(Num > 0){

 printf("\n A raiz quadrada é:%f2.2",sqrt(Num));
 printf("\no quadrado Do Numero é:%2.2f",pow(Num,2));
 }
 else{
 }
 return 0;
}


