#pragma once
#include "Punto.h"

class Circulo {
private:
    Punto posicion;
    float radio;

public:
    Circulo(Punto p, float r = 1.0f)
        : posicion(p), radio(r) {}

    void setPosicion(Punto p);
    void setRadio(float r);

    Punto getPosicion() const;
    float getRadio() const;
};