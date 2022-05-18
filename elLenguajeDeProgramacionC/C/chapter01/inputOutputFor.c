/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 04: Usando la entrada y salida de datos con for
*/
#include<stdio.h>

void main(){

    int characterNumbers=0;

    for(characterNumbers=0; getchar()!=EOF; characterNumbers++){}
    ;

    printf("%df\n",characterNumbers);
}