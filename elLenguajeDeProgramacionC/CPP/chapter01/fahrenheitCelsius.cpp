/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 02: Conversion de grados fahrenheit a grados centigrados
*/
#include<iostream>
using namespace std;

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
    /*Programa con ciclo while
    float fahrenheit, celsius;
    float lower, upper, step;

    lower=0;
    upper=300;
    step=20;

    fahrenheit=lower;

    cout<<"Fahrenheit\t\tCelsius\n";
    while(fahrenheit<=upper){
        celsius=5*(fahrenheit-32)/9;
        cout<<fahrenheit<<"\t\t\t"<<celsius<<"\n";
        fahrenheit=fahrenheit+step;
    }*/

    int fahrenheit;
    cout<<"Fahrenheit\t\tCelsius\n";
    for(fahrenheit=LOWER; fahrenheit<=UPPER; fahrenheit+=STEP){
        cout<<fahrenheit<<"\t\t\t"<<(5.0/9.0)*(fahrenheit-32)<<"\n";

    }

    return 0;
}