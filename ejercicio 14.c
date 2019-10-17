#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main (void) {
char letra;
int opt;
do {
printf("escribe letra para analizar: \n");
letra =getch();
if (letra=='a' || letra=='A'){
    printf("es una vocal \n");
}
else {
    if (letra=='e' || letra=='E'){
    printf("es una vocal \n");
} else{if (letra=='i' || letra=='I'){
    printf("es una vocal \n");
}
else {if (letra=='o' || letra=='O'){
    printf("es una vocal \n");
} else {if (letra=='u' || letra=='U'){
    printf("es una vocal \n");
} else {printf ("es una consonante \n");}
}
}
}


}
printf("quiere ingresar otra letra? \n 1:SI \n 2:NO \n");
scanf("%d", &opt);
}
while (opt==1);
}

