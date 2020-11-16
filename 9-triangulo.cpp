//"Ingrese los catetos y retorne la hipotenusa"
#include <iostream>
#include <math.h>

using namespace std;

int main (){
    float ca, co, hip;
    cout<<"Este programa te calcula el valor de la hipotenusa en base a los catetos"<<endl;
    cout<<"Ingrese el valor del Cateto Adyacente: "; cin>> ca;
    cout<<"Ingrese el valor del Cateteo Opuesto: "; cin>> co ; 
    
    hip = pow( (pow(ca, 2)) + (pow(co, 2))    , (0.5) );

    cout<<"El valor de la hipotenusa es: "<<hip<<endl;
    return 0;
}