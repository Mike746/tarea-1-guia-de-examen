#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(void) {
char otro;
char color;
do {
printf("ingresa letra del indicador \n");
scanf("%c", &color);

if ((color=='r'||color=='R')){
    printf("ROJO \n");
}
else { if ((color=='v'||color=='V')) {
        printf("VERDE \n");
}
else {if ((color=='a'||color=='A')) {
        printf("AZUL \n");
}
else {
    printf("negro \n");

}
}
}
printf ("quieres ingresar nuevo valor: s n \n");
otro=getch();
}
while (otro=='s' || otro=='S');
}
