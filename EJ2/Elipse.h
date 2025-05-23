#pragma once

#include "Punto.h"

class Elipse {
private:
    Punto posicion;
    float a; // semieje mayor
    float b; // semieje menor

public:
    Elipse(Punto p, float semiejeA = 1.0f, float semiejeB = 1.0f)
        : posicion(p), a(semiejeA), b(semiejeB) {}

    void setPosicion(Punto p);
    void setA(float valor);
    void setB(float valor);

    Punto getPosicion() const;
    float getA() const;
    float getB() const;
};