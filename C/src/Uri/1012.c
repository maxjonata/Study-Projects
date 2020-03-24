<<<<<<< HEAD
/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre: 
a) a área do triângulo retângulo que tem A por base e C por altura. 
b) a área do círculo de raio C. (pi = 3.14159) 
c) a área do trapézio que tem A e B por bases e C por altura. 
d) a área do quadrado que tem lado B. 
e) a área do retângulo que tem lados A e B. 
*/

#include <stdio.h>

int main()
{
    double A,B,C;

    scanf(" %lf", &A);
    scanf(" %lf", &B);
    scanf(" %lf", &C);

    printf("TRIANGULO: %.3lf", (A * C) / 2);
    printf("CIRCULO: %.3lf", (C * C) * 3.14159);
    printf("TRAPEZIO: %.3lf", ((A+B) * C)/2);
    printf("QUADRADO: %.3lf", B*B);
    printf("RETANGULO: %.3lf", A*B);
=======
/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre: 
a) a área do triângulo retângulo que tem A por base e C por altura. 
b) a área do círculo de raio C. (pi = 3.14159) 
c) a área do trapézio que tem A e B por bases e C por altura. 
d) a área do quadrado que tem lado B. 
e) a área do retângulo que tem lados A e B. 
*/

#include <stdio.h>

int main()
{
    double A,B,C;

    scanf(" %lf", &A);
    scanf(" %lf", &B);
    scanf(" %lf", &C);

    printf("TRIANGULO: %.3lf", (A * C) / 2);
    printf("CIRCULO: %.3lf", (C * C) * 3.14159);
    printf("TRAPEZIO: %.3lf", ((A+B) * C)/2);
    printf("QUADRADO: %.3lf", B*B);
    printf("RETANGULO: %.3lf", A*B);
>>>>>>> b40020655e623470d8694fef4dab9e11f5ddbd76
}