#include<iostream>
#include<cmath>
#include<iomanip>

// Uso la serie de Leibniz y la multiplico por cuatro asi obtengo pi de forma directa

double seriePi(int x){
    return (pow(-1, x) * 4) / (2 * x + 1);
}

using namespace std;
int main(){

    double pi = 0;
    bool pitrue = 0;
    int i, pientero = 0;
    const int verif = 3141592;

    /* Voy a usar "verif" y "pientero" para saber cuando ya saqué los primeros seis
    decimales y cuando suceda esto cambiar "pitrue" y así detener el ciclo for */

    for(i = 0; pitrue == 0; i++){
        pi = pi + seriePi(i);
        pientero = pi * 1000000;

        if(verif == pientero){
            pitrue = 1;
        }
    }

    cout << "Pi = " << fixed << setprecision(6) << pi << endl;
    cout << "Se necesitan " << i << " iteraciones para calcular los primeros seis decimales de pi";

    /* Aclaro con "fixed" y "setprecision" que quiero que se impriman los primeros
    seis decimales en la pantalla */

    return 0;
}