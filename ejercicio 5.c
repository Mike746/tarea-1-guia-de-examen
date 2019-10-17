#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main (void) {
float a;/*radio*/
float b=3.1416;/*pi*/
float c;/*area*/
float d;/*circunferencia*/
char otro;
do {
printf("ingresa el valor del radio de tu circulo: \n");
scanf("%f", &a);
c=b*(a*a);
printf("el area es igual a: %f \n", c);
d=b*(2*a);
printf("la circunferencia es igual a: %f \n", d );
printf("quieres calcular otro radio? \n s n \n");
otro=getch();
}
while (otro=='s' || otro=='S');
}
