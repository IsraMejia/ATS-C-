#include <iostream>
using namespace std;

int main (){
    
    int x,y, aux;

    cout<< "Digite el valode x: " ; cin>> x;
    cout<<"Digita el valor de y: "; cin >> y ; 

    aux = x;
    x=y ; 
    y = aux;

    cout << "\nEl nuevo valor de x: "<<x<<endl;
    cout << "El nuevo valor de y: " << y << endl;
    
    return 0;
}