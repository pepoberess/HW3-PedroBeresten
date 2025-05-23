#pragma once
#include "MedicionBase.h"

class Presion : MedicionBase{
public:
    float presionEstatica;
    float presionDinamica;

    Presion(float p, float q, float t) : MedicionBase(t), presionEstatica(p), presionDinamica(q) {}

    Presion(const Presion& other) : MedicionBase(other), presionEstatica(other.presionEstatica), presionDinamica(other.presionDinamica) {}
    
    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;

    void imprimir() const override;
};