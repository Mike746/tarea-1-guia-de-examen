#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main (void) {
int a;
int b;
int c;
printf("ingrese primer valor \n");
scanf("%d", &a);
printf("ingrese segundo valor \n");
scanf("%d", &b);
printf("ingrese tercer valor \n");
scanf("%d", &c);
if ((a<b)&&(b>c)){
    printf ("el numero mas grande es: \n %d", b);

}
    else {
        if ((b<a)&&(a>c)){
     printf ("el numero mas grande es: \n %d", a);
        }
        else {
            if ((a<c)&&(c>b)){
                printf("el numero mas grande es: \n %d", c);
            }
        }
    }

}


