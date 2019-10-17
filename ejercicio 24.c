#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(void){
int opt;
char otro;
do
{printf ("ingresa el numero de tu indicador: \n");
scanf("%d", & opt);
switch (opt) {
case 1:
    printf("calor \n");
    break;
case 2:
    printf("templado \n");
    break;
case 3:
    printf("frio \n");
    break;
case 4:
    printf("fuera de rango \n");
    break;
default:
    printf("ingresa numeros solo del 1 al 4 \n");
}
printf("quieres ingresar otro indicdor distinto? S N \n");
otro=getch();
}
while(otro=='s'|| otro=='S');
}
