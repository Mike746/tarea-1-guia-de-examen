#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main () {
float n,max=0,min=9999999,d,cont=0,med;
printf("Maximo,minimo y media de una lista de 10 numeros.\n");
for(d=1;d<=10;d++){
 printf("Introduce un numero:");
 scanf("%f",&n);
  if(n>max){
  max=n;
  }
  if(n<min){
  min=n;
  }
 cont=cont+n;
 }
med=cont/d;
printf("El numero mayor es %f y el menor es %f.\nLa media es: %f.",max,min,med);
}
