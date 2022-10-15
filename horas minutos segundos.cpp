#include <iostream>

using namespace std;

int main() { //inicio de variables
    int H=0;
    int M=0;
    int S=0;
    int Total = 0;
    
    // solicitud de las horas minutos y segundos
    cout << "\ningresa una cantidad de horas";
    cin >> H;
    cout << "\ningresa una cantidad de minutos";
    cin >> M;
    cout << "\ningresa una cantidad de segundos";
    cin >> S;
    
    H = H * 60 * 60; // pasar de horas a segundos
    M = M * 60; // pasar de minutos a segundos
    Total = H + M + S; // sumar todo
    
    cout << "\n\nel total de segundos es de " << Total; // resultado final
}