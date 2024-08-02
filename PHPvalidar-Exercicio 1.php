<?php
$peso = $_POST['peso'];
$altura = $_POST['altura'];
$imc = $peso / ($altura * 2);



if ($imc <= 18.5){

    echo " <div style='text-align:center'> <h1> O caclulo do seu IMC é de:  $imc </h1> </div>";
    echo "<div style='text-align:center'> <h1> Sua classificação de IMC é de Magreza </h1> </div>";

} else{

if ($imc >18.5 && $imc <=24.9){
   
        echo " <div style='text-align:center'> <h1> O caclulo do seu IMC é de:  $imc </h1> </div>";
        echo "<div style='text-align:center'><h1> Sua classificação de IMC é de Saudável </h1> </div>";

} else {

if ($imc > 24.9 && $imc <=29.9){
    
        echo " <div style='text-align:center'> <h1> O caclulo do seu IMC é de:  $imc </h1> </div>";
        echo "<div style='text-align:center'><h1> Sua classificação de IMC é de Sobrepeso </h1> </div>";

} else {

if ($imc > 29.9 && $imc <= 34.9){
    
        echo " <div style='text-align:center'> <h1> O caclulo do seu IMC é de:  $imc </h1> </div>";
        echo "<div style='text-align:center'><h1> Sua classificação de IMC é de Obesidade Grau I </h1> </div>";

} else {

if ($imc > 34.9 && $imc <= 40){
    
        echo " <div style='text-align:center'> <h1> O caclulo do seu IMC é de:  $imc </h1> </div>";
        echo "<div style='text-align:center'><h1> Sua classificação de IMC é de Obesidade Grau II </h1> </div>";

} else { 

if ($imc > 40.0){
    
        echo " <div style='text-align:center'> <h1> O caclulo do seu IMC é de:  $imc </h1> </div>";
        echo "<div style='text-align:center'><h1> Sua classificação de IMC é de Obesidade Grau III </h1> </div>";
}
}}}}}  
