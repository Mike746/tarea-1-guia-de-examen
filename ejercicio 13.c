#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main ()
{
int n,d,i;
printf("Conozca si un numero es primo o no.\n");
printf("Introduce un numero:\n");
scanf("%d",&n);
d=0;
for(i=1;i<=n;i++){
 if(n%i==0)
 d++;
 }
if(d==2){
 printf("El numero %d es primo.\n",n);
 }
else
printf("El numero %d no es primo.\n",n);
}

