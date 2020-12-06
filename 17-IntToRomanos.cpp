#include <iostream>
using namespace std;

int main (){
  int numero, unidades, decenas, centenas, millar;
  cout << "\n\tEste programa cambia un numero en decimal a Romano";
  cout <<"Digite un numero: "; cin>>numero;
  //Vamos a separar el numero en unidades decenas, centenas y asi
  // numero 2152
  unidades = numero%10; numero /= 10;   //2
  //nos quedamos solo con las unidades y divimos entre 10 para poder aprovechar el trukzo en decenas y asi xd
  decenas = numero %10; numero /=10; // 215%10 = 5 -> numero=21 
  centenas = numero%10; numero /=10; // 21%10 = 1 -> numero= 2
  millar = numero %10; numero/=10; // 2%10 = 2 -> numero = 2

  switch (millar){
    case 1: cout<< "M"; break;
    case 2: cout<< "MM"; break;
    case 3: cout<< "MMM"; break;
  }

  switch(centenas){
    case 1: cout<<"C" ; break;
    case 2: cout<<"CC" ; break;
    case 3: cout<<"CCC" ; break;
    case 4: cout<<"CD" ; break;
    case 5: cout<<"D" ; break;
    case 6: cout<<"DC" ; break;
    case 7: cout<<"DCC" ; break;
    case 8: cout<<"DCCC" ; break;
    case 9: cout<<"CM" ; break;
  }

  switch(decenas){
    case 1: cout<<"X" ; break;
    case 2: cout<<"XX" ; break;
    case 3: cout<<"XXX" ; break;
    case 4: cout<<"XL" ; break;
    case 5: cout<<"L" ; break;
    case 6: cout<<"LX" ; break;
    case 7: cout<<"LXX" ; break;
    case 8: cout<<"LXXX" ; break;
    case 9: cout<<"XC" ; break;
  }

  switch(unidades){
    case 1: cout<<"I" ; break;
    case 2: cout<<"I" ; break;
    case 3: cout<<"III" ; break;
    case 4: cout<<"IV" ; break;
    case 5: cout<<"V" ; break;
    case 6: cout<<"VI" ; break;
    case 7: cout<<"VII" ; break;
    case 8: cout<<"VIII" ; break;
    case 9: cout<<"IX" ; break;
  }

  return 0;
}