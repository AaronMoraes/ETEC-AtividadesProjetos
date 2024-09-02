<?php
$numero = $_POST['numero'];

if ($numero >= 0 && $numero <= 30) {
	echo "<div class='resultado'>";
	echo "<h2>Tabuada do $numero</h2>";
	for ($i = 0; $i <= 10; $i++) {
		echo "$numero x $i = " . ($numero * $i) . "<br>";
	}
	echo "</div>";
} else {
	echo "Número inválido. Por favor, escolha um número entre 0 e 30.";
}
?>
