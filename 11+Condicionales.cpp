#include <iostream>

using namespace std;

int main (){
    int numero, dato = 5;
    cout<<"Digite un numero: ";cin >>numero;
    
    if(numero != dato){
        cout<<"El numero es diferente a 5, numero = "<< numero <<endl;
    }else{
        cout<<"El numero es igual a 5 = "<<numero  <<endl; 
    }

    return 0;
}