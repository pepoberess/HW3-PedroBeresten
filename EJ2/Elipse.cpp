#include "Elipse.h"

void Elipse :: setPosicion(Punto p) { posicion = p; }
void Elipse :: setA(float valor) { a = valor; }
void Elipse :: setB(float valor) { b = valor; }

Punto Elipse ::  getPosicion() const { return posicion; }
float Elipse ::  getA() const { return a; }
float Elipse ::  getB() const { return b; }