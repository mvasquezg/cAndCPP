/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 02: Conversion de grados fahrenheit a grados centigrados
*/
class FahrenheitCelsius{
    public static void Main(string[] args){
        float fahrenheit, celsius;
        float lower, upper, step;

        lower=0;
        upper=300;
        step=20;

        fahrenheit=lower;

        System.Console.Write("Fahrenheit\t\tCelsius\n");
        while(fahrenheit<=upper){
            celsius=5*(fahrenheit-32)/9;
            System.Console.Write(fahrenheit+"\t\t\t"+celsius+"\n");
            fahrenheit=fahrenheit+step;
        }

    }///end main 
}//FahrenheitCelsius