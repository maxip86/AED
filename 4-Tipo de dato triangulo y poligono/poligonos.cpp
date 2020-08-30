/*Tipo de dato — Triangulo y poligono
Peña Maximiliano Ezequiel
20200830
*/

#include <array>


enum struct Colores {negro, azul, marron, gris, verde, naranja, rosa, violeta, rojo, blanco, amarillo};

struct Punto {double x, y;};

struct Trinagulo {Punto t1, t2, t3; Colores colorTriangulo;};


struct DatosDelPoligono {unsigned ladosDelPoligono; std::array <Punto,12> puntosDelPoligono;};

struct Poligono {DatosDelPoligono puntosDelPoligono; Colores colorPoligono;};
