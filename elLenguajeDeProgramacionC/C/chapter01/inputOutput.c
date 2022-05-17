/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 03: Usando la entrada y salida de datos con getchar() y putchar()
*/
#include<stdio.h>

void main(){
    int c;

    c=getchar();

    while(c!=EOF){
        putchar(c);
        c=getchar();
    }
}