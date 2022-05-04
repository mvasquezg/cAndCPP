var idTabDegrees=document.getElementById("idTabDegrees");           
var idBtnClean=document.getElementById("idBtnClean");

idBtnClean.style.display="none";

function showMessage(){
    alert("Hola mundo");
}

function calculateFahtoCels(){
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
        }
}

function cleanTable(){
    idBtnClean.style.display="none";
    idTabDegrees.innerHTML="";

}