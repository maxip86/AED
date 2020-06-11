/*Funciones y Comparación de Valores en Punto Flotante
Peña Maximiliano Ezequiel
20200604
*/

#include <iostream>
#include <cassert>

double Celcius(double);
bool AreNear(double, double, double);
double b, c, d{0.001};

int main() {
    double a; 
    std::cin >> a;
    assert (Celcius(32) == 0);
    assert ((AreNear (b = 4.444 , c =Celcius(40), d ))  == 1);
    assert ((AreNear (b = 18.444 , c =Celcius(40), d ))  == 0);
    //std::cout << Celcius(a) << std::endl;
 
}

double Celcius(double a) {return ( a - 32.0) * 5.0 / 9.0;};
bool AreNear( double b, double c, double d = 0.001) {return abs(c - b) <= d;}
