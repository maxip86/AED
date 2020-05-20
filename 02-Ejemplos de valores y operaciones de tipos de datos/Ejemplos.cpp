/*Ejemplos de valores y operaciones de tipos de datos
Peña Maximiliano Ezequiel
20200520
*/

#include <iostream>
#include <assert.h>

int main () {
    bool bool1{true}, bool2{false}, bool3{};
    char car1{'A'}, car2{'B'}, car3{};
    unsigned nat1{23}, nat2{4}, nat3{};
    int ent1{-4}, ent2{3}, ent3{};
    double rea1{1.5}, rea2{2.5}, rea3{};
    std::string cad1{"Hello"}, cad2{"world"}, cad3{};

bool3 = bool1 or bool2;
/*std::cout << bool3;*/
assert (bool3 == 1);

car3 = car1 + car2;
/*std::cout << car1 + car2;*/ /*La idea era que al "concatenar" car1 y car2 se muestre "AB", pero toma su correspondiente valor ASCII y los suma*/
assert (car3 = 131);

nat3 = nat1 % nat2 ;
/*std::cout << nat3;*/ 
assert (nat3 == 3);

ent3 = ent1 + ent2;
/*std::cout << ent3;*/
assert (ent3 == -1);

rea3 = rea1 * rea2;
/*std::cout << rea3;*/
assert (rea3 == 3.75);

cad3 = cad1 +" "+ cad2;
/*std::cout << cad3;*/
assert (cad3 == "Hello world");

}
