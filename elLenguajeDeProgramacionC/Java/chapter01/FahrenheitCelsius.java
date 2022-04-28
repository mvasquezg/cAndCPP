/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 02: Conversion de grados fahrenheit a grados centigrados
*/
public class FahrenheitCelsius{
    public static void main(String[] args){
        int fahrenheit, celsius;
        int lower, upper, step;

        lower=0;
        upper=300;
        step=20;

        fahrenheit=lower;

        System.out.print("Fahrenheit\t\tCelsius\n");
        while(fahrenheit<=upper){
            celsius=5*(fahrenheit-32)/9;
            System.out.print(fahrenheit+"\t\t\t"+celsius+"\n");
            fahrenheit=fahrenheit+step;
        }

    }//end main
}//end FahrenheitCelsius