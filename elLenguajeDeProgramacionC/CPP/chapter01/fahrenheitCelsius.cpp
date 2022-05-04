/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 02: Conversion de grados fahrenheit a grados centigrados
*/
#include<iostream>
using namespace std;

int main(){
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
    }

    return 0;
}