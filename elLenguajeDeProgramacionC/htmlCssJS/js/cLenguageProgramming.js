//constant
const LOWER=0;
const UPPER=300;
const STEP=20;

var idTabDegrees=document.getElementById("idTabDegrees");           
var idBtnClean=document.getElementById("idBtnClean");

idBtnClean.style.display="none";

function showMessage(){
    alert("Hola mundo");
}

function calculateFahtoCels(){
        /*Codigo con ciclo while
        var fahrenheit, celsius;
        var lower, upper, step;

        lower=0;
        upper=300;
        step=20;

        fahrenheit=lower;

        idBtnClean.style.display="block";
        idTabDegrees.innerHTML+="<tr><th>Fahrenheit</th><th>Celsius</th></tr>";
        while(fahrenheit<=upper){
            celsius=5*(fahrenheit-32)/9;
            idTabDegrees.innerHTML+="<tr><td>"+fahrenheit.toFixed(2)+"</td><td>"+celsius.toFixed(2)+"</td></tr>";
            fahrenheit=fahrenheit+step;
        }*/

        var fahrenheit, celsius;
   
        idTabDegrees.innerHTML+="<tr><th>Fahrenheit</th><th>Celsius</th></tr>";
        /*for(fahrenheit=0; fahrenheit<=300; fahrenheit+=20){
            celsius=5*(fahrenheit-32)/9;
            idTabDegrees.innerHTML+="<tr><td>"+fahrenheit.toFixed(2)+"</td><td>"+celsius.toFixed(2)+"</td></tr>";
        }*/
        for(fahrenheit=LOWER; fahrenheit<=UPPER; fahrenheit+=STEP){
            celsius=5*(fahrenheit-32)/9;
            idTabDegrees.innerHTML+="<tr><td>"+fahrenheit.toFixed(2)+"</td><td>"+celsius.toFixed(2)+"</td></tr>";
        }
        idBtnClean.style.display="block";    
}

function cleanTable(){
    idBtnClean.style.display="none";
    idTabDegrees.innerHTML="";

}