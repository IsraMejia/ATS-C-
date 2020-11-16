/*Ejercicio 7: La calificación final de un estudiante es la media ponderada de tres notas: 
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y
 la nota de participación que cuenta el 10% restante. 
 Escriba un programa que lea de la entrada estándar las tres notas de un alumno y 
 escriba en la salida estándar su nota final.
*/

#include <iostream>

using namespace std;

int main(){
    float practica, teorica, participacion, calificacion;

    cout<<"Digita la nota de practica: " ; cin>>practica;
    cout<<"Digita la nota de teorica " ; cin>> teorica ;
    cout<<"Digita la nota de participacion : " ; cin>> participacion;

    practica  *= 0.3;
    teorica *= 0.6;
    participacion *= 0.1;
    calificacion = practica + teorica + participacion;

    cout<<"La calificacion final es: " << calificacion <<endl;

    return 0;
}