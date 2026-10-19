#include <iostream>
using namespaces std;

int main(){
    int opcion, n1, n2, resultado;
    cout<<"Bienvenido a mi calculadora"<<endl;
    cout<<"1. Suma."<<endl;
    cout<<"2. Resta."<<endl;
    cout<<"3. Multiplicacion."<<endl;
    cout<<"4. Division."<<endl;
    cin>>opcion,

    switch(opcion){
        case 1:
            resultado = n1+n2;
            cout<<"La suma de los numero es: "<<resultado<<endl;
        break;
        case 2: 
        resultado = n1-n2;
        cout<<"la resta de los numeros es:"<<resultado<<endl;
        break;
        case 3:
            resultado = n1*n2;
            cout<<"La multiplicacion de los numeros es: "<<resultado;
        break;

    }
}