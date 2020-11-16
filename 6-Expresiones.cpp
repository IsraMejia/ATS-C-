#include <iostream>

using namespace std;

int main (){
    float a, b, c, d, resultado;
    cout<<"\nDigite el valor de a:";cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    resultado = (a/b) +1;
    cout.precision(3); //Cifras significativas Aplica a TODAS las salidas
    cout<<"El resultado es: "<<resultado<<endl;

    cout<<"\n\nSegundo ejercicio";
    cout<<"Ingrese el valor de c: " ;cin>>c;
    cout<<"Ingrese el valor de d: " ;cin>>d;
    cout<<"El resultado de sumar a y b, y restarselo a la adicion de c y d, es:";
    resultado = (a+b) / (c+d);
    cout<<resultado<<endl;

    return 0;
}