#pragma once
#include "IMediciones.h"

class MedicionBase : public IMediciones {
protected:
    unique_ptr<float> tiempoMedicion;

public:
    MedicionBase(float tiempo = 0.0f) {
        tiempoMedicion = make_unique<float>(tiempo);
    }

    MedicionBase(const MedicionBase& other) : tiempoMedicion(std::make_unique<float>(*other.tiempoMedicion)) {} // Constructor copia para no tener que usar move.

    float getTiempo() const;

    void serializar(ofstream& out) const override;
    void deserializar(ifstream& in) override;

    virtual void imprimir() const = 0;
};