/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 02: Conversion de grados fahrenheit a grados centigrados
*/
#include<stdio.h>
void main(){
    int fahrenheit, celsius;
    int lower, upper, step;

    lower=0;
    upper=300;
    step=20;

    fahrenheit=lower;

    printf("%s\t%s\n", "Fahrenheit", "Celsius");
    while(fahrenheit<=upper){
        celsius=5*(fahrenheit-32)/9;
        printf("%d\t\t%d\n", fahrenheit, celsius);
        fahrenheit=fahrenheit+step;
    }
}