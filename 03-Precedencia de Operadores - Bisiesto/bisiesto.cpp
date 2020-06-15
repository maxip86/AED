/*Precedencia de Operadores —  Bisiesto
Peña Maximiliano Ezequiel
20200611
*/

//#include <iostream>
#include <cassert>

bool IsBisiesto(unsigned); //Prototipo

int main() {
    unsigned a {1996} ;
    assert (not IsBisiesto(1600));
    assert (not IsBisiesto(1900));
    assert (IsBisiesto(1996));
    assert (not IsBisiesto(1998));
    assert (not IsBisiesto(1999));
    assert (IsBisiesto(2000));
    assert (not IsBisiesto(2001));
    assert (IsBisiesto(2020));
    assert (not IsBisiesto(2021));
    assert (not IsBisiesto(2100));
    assert (IsBisiesto(2196));
    assert (not IsBisiesto(2200));
    assert (not IsBisiesto(2202));
    assert (IsBisiesto(2204));
    //std::cout << IsBisiesto(a);

}

bool IsBisiesto(unsigned a) {return a > 1852 and a % 4 == 0 and (a % 100 !=0  or a % 400 == 0);} //Definición
