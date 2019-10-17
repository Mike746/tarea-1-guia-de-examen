/* tarea 1
nombre:miguel angel rodriguez ramirez, grupo 1AV6*/
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main (void) {
    float a;
    int b;
    float c;
    printf ("ingresa tu estatura en metros \n");
    scanf ("%f", &a);
    printf ("ingresa tu edad \n");
    scanf ("%d", &b);
    c=(a*100-100+.1*b*.9);
    printf ("tu peso recomendado en kg es: \n %f", c);

}
