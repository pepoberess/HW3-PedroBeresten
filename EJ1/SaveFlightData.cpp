#include "SaveFlightData.h"

void SaveFlightData :: serializar(ofstream& out) const {
    posicion.serializar(out);
    presion.serializar(out);
}

void SaveFlightData :: deserializar(ifstream& in) {
    posicion.deserializar(in);
    presion.deserializar(in);
}

void SaveFlightData :: imprimir() const {
    std::cout << "La posición del avión es:\n";
    posicion.imprimir();
    std::cout << "La presión es:\n";
    presion.imprimir();
}