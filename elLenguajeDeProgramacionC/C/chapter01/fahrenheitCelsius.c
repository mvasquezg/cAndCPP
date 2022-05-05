/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 02: Conversion de grados fahrenheit a grados centigrados
*/
#include<stdio.h>
void main(){
    /*Primera parte del programa con while
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
    }*/

    int fahrenheit;
   
    printf("%s\t%s\n", "Fahrenheit", "Celsius");
    for(fahrenheit=0; fahrenheit<=300; fahrenheit+=20){
        printf("%3d%19.1f\n", fahrenheit, (5.0/9.0)*(fahrenheit-32));
    }

}