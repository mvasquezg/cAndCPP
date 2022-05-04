/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 02: Conversion de grados fahrenheit a grados centigrados
*/
#include<stdio.h>
void main(){
    float fahrenheit, celsius;
    float lower, upper, step;

    lower=0;
    upper=300;
    step=20;

    fahrenheit=lower;

    printf("%s\t%s\n", "Fahrenheit", "Celsius");
    while(fahrenheit<=upper){
        celsius=(5.0/9.0)*(fahrenheit-32);
        printf("%3.0f%18.1f\n", fahrenheit, celsius);
        fahrenheit=fahrenheit+step;
    }
}