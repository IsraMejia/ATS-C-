#include <iostream>

using namespace  std;

int main(){
    int numero;
    cout<<"Ingrese un numero: "; cin >>numero;
    if(numero == 0){
        cout<<"El numero es 0"<<endl; //Se salta el else if

    }else if(numero%2 == 0){ //Si no es 0 entra aqui
        cout<<"El numero "<<numero; cout<<" es Par"<<endl;
    }else{
        cout<<"El numero "<<numero; cout<<" es Impar"<<endl;
    }

    cout<<"Ingrese otro  numero: "; cin >>numero;
    cout<<"Te dire si es positivo o negativo papu B)"<<endl;
    if(numero < 0){
        cout<<"El numero "<<numero; cout<<" es Negativo"<<endl;
    }else{
        cout<<"El numero "<<numero; cout<<" es Positivo"<<endl;
    }

    return 0;
}