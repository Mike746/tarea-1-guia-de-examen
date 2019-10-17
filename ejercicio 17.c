#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main (void) {
float a;
float b;
float c;
float d;
printf ("ingresa tiempo en segundos \n");
scanf("%f", &a);
d=a;
printf("en segundos: %f \n", d);
b=a/60;
printf("en minutos: %f \n", b);
c=b/60;
printf("en horas: %f \n", c);
}

