#include "Rectangulo.h"

void Rectangulo :: setVertice(Punto p) { verticeInferiorIzquierdo = p; }
void Rectangulo :: setAncho(float a) { ancho = a; }
void Rectangulo :: setLargo(float l) { largo = l; }

Punto Rectangulo :: getVertice() const { return verticeInferiorIzquierdo; }
float Rectangulo :: getAncho() const { return ancho; }
float Rectangulo :: getLargo() const { return largo; }