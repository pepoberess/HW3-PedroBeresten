#pragma once

#include <iostream>
#include "Elipse.h"
#include "Punto.h"
#include "Rectangulo.h"
#include "Circulo.h"

using namespace std;

template<typename T>
class ProcesadorFigura{
public:
    double static areaFigura(const T& figura);
};

template<>
double ProcesadorFigura<Circulo> :: areaFigura(const Circulo& c){
    return 3.14 * c.getRadio() * c.getRadio();
}

template<>
double ProcesadorFigura<Elipse> :: areaFigura(const Elipse& e){
    return 3.14 * e.getA() * e.getB();
}

template<>
double ProcesadorFigura<Rectangulo> :: areaFigura(const Rectangulo& r){
    return r.getAncho() * r.getLargo();
}