#include "Posicion.h"

void Posicion :: serializar(ofstream& out) const{
    MedicionBase :: serializar(out);
    out.write(reinterpret_cast<const char*>(&latitud), sizeof(float));
    out.write(reinterpret_cast<const char*>(&longitud), sizeof(float));
    out.write(reinterpret_cast<const char*>(&altitud), sizeof(float));
}
void Posicion :: deserializar(ifstream& in){
    MedicionBase :: deserializar(in);
    in.read(reinterpret_cast<char*>(&latitud), sizeof(float));
    in.read(reinterpret_cast<char*>(&longitud), sizeof(float));
    in.read(reinterpret_cast<char*>(&altitud), sizeof(float));
}

void Posicion :: imprimir() const{
    cout << "Latitud: " << latitud << ", Longitud: " << longitud
    << ", Altitud: " << altitud << ", Tiempo: " << MedicionBase :: getTiempo() << "\n";
}