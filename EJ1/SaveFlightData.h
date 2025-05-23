#pragma once
#include "Presion.h"
#include "Posicion.h"

class SaveFlightData{
public:
    Posicion posicion;
    Presion presion;

    SaveFlightData(const Posicion& p, const Presion& q) : posicion(p), presion(q) {}

    void serializar(ofstream& out) const;

    void deserializar(ifstream& in);

    void imprimir() const;
};