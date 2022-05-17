
/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 03: Usando la entrada y salida de datos con get() y put()
*/

#include<iostream>
using namespace std;

int main(){
    int character;

    while((character=cin.get())!=EOF){
        cout.put(character);
        
    }
}//end main