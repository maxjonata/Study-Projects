<?php
    function soma($numero1, $numero2) {
        return ($numero1 + $numero2);
    }
    function subtrai($numero1, $numero2) {
        return ($numero1 - $numero2);
    }
    function multiplica($numero1, $numero2) {
        return ($numero1 * $numero2);
    }
    function divide($numero1, $numero2) {
        return ($numero1 / $numero2);
    }
    function somatorio(array $numeros) {
        switch(count($numeros)) {
            case 0:
                return 0;
            case 1:
                return $numeros[0];
            default:
                return somatorio([soma(array_pop($numeros), somatorio($numeros))]);
        }
    }
    function mediaAritmetica(array $numeros) {
        return divide(somatorio($numeros), count($numeros));
    }
?>