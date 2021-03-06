/*
*Libro: The C Programming Language, Segunda Edicion.
*Capitulo 01.
*Programa 02: Conversion de grados fahrenheit a grados centigrados
*/
public class FahrenheitCelsius{
    public static final int LOWER=0;
    public static final int UPPER=300;
    public static final int STEP=20;
    
    public static void main(String[] args){
        
        /*Codigo con sentencia While
        float fahrenheit, celsius;
        float lower, upper, step;

        lower=0.0f;
        upper=300.0f;
        step=20.0f;

        fahrenheit=lower;

        System.out.print("Fahrenheit\t\tCelsius\n");
        while(fahrenheit<=upper){
            celsius=5*(fahrenheit-32)/9;
            System.out.print(fahrenheit+"\t\t\t"+celsius+"\n");
            fahrenheit=fahrenheit+step;
        }*/

        int fahrenheit;
   
        System.out.print("Fahrenheit\t\tCelsius\n");
        for(fahrenheit=LOWER; fahrenheit<=UPPER; fahrenheit+=STEP){
            System.out.print(fahrenheit+"\t\t\t"+(5.0/9.0)*(fahrenheit-32)+"\n");
        }

    }//end main
}//end FahrenheitCelsius