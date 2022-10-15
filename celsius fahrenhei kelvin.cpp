#include <iostream>

using namespace std;

int main() { //definiendo variables
    float C = 0;
    float F = 0;
    float K = 0;
    int Menu = 0;
    
    cout<<"ingrese una cantidad de grados Celsius\n"; //solicita los grados celsius
    cin>>C;
    
    cout<<"\n\nQue desea realizar? \n1 - Convertir de Celsius a Fahrenheit \n2 - Convertir de Celsius a Kelvin \n3 - Salir\n"; // menu de accion donde se dan opciones
    cin>>Menu; //lectura del menu
    
    switch (Menu) //se utiliza switch ya que es mas comodo
    {
        case 1: F = (9*C)/5 + 32; //caso 1 pasar de celsius a fahrenheit
        cout<< "\nen grados Fahrenheit son " << F;
        break;
        
        case 2: K = C + 273.15; //caso 2 pasar de celsius a kelvin
        cout<< "en grados Kelvin son " << K;
        break;
        
        case 3: cout<< "Tenga un lindo dia"; // caso 3 es cerrar el programa
        break;
        
        default: cout<< "por favor, elija una opcion valida"; //default es que la opcion no fue valida
    }
    return 0;
}