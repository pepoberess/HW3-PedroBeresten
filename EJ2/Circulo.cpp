#include "Circulo.h"

void Circulo :: setPosicion(Punto p) { posicion = p; }
void Circulo :: setRadio(float r) { radio = r; }

Punto Circulo :: getPosicion() const { return posicion; }
float Circulo :: getRadio() const { return radio; }