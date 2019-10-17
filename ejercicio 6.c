/* tarea 1
nombre:miguel angel rodriguez ramirez, grupo 1AV6*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main (void) {
char regreso;
do {
    int a;
    int b;
    printf ("ingresa numero para analizar \n");
    scanf ("%d", &a);
    b=(a%2);
    if (b==0){
        printf ("es un numero par \n");
    }
    else {
        printf ("es un numero impar \n");
    }
    printf("quieres ingresar otro numero S N:\n");
  regreso=getch();
}
while (regreso=='S' || regreso=='s');
}
