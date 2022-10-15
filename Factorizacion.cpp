#include <iostream>

using namespace std;

int main() { // definir variables
    int N = 0;
    int Fac = 0;
    int Sav = 1;
    
    cout<< "ingrese un numero a factorizar \n"; //solicitud del factor
    cin >> Fac; //lectura del factor
    N = Fac; //asignacion del factor en la variable N para realizar la formula
    
    if (Fac == 0) { // los factores en 0 no son 0 en si, sino que equivalen a 1
        N = 1 ;
        cout << "su factorial fue " << Fac;
        cout << " y su resultado de " << N;
    } 
    else 
    {
        while (N >= 1) //el while repetira el numero para realizar la factorizacion
        {
             Sav = Sav * N; //la primera vez se multiplica el factor por el numero inicial, el inicial siempre es 1 para evitar errores
             cout << "" << N; // solo muestra el numero
             cout << " * "; // solo muestra un "*"
             N = N -1; // resta de 1 digito para proceder con la siguiente vuelta
             
             
        }
        cout<< "\nla factorizacion es igual a " << Sav; // resultado final de la factorizacion
    }
    
}