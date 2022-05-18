/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 04: Usando la entrada y salida de datos con for
*/
#include<iostream>
using namespace std;

int main(){

    int characterNumbers=0;

    for(characterNumbers=0; cin.get()!=EOF; characterNumbers++){}
    ;

    cout<<characterNumbers;

    return 0;
}