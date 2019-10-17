#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(void) {
float a;
float b;
printf("ingresa el consumo de agua en litros \n");
scanf("%f", &a);
if ((a>50)&&(a<200)) {
    b=10*(a-50);
    printf("su total a pagar es de: \n %f", b);
}
else{
    if (a>200){
        b=20*(a-50);
        printf("su total a pagar es de: \n %f", b);
    }
    else {
        if (a<50){
            b=200;
            printf("su total a pagar es de: \n %f", b);
        }
    }
}
}


