#include "MedicionBase.h"

float MedicionBase :: getTiempo() const {return *tiempoMedicion;}

void MedicionBase :: serializar(ofstream& out) const{
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()), sizeof(float));
}
void MedicionBase :: deserializar(ifstream& in){
    in.read(reinterpret_cast<char*>(tiempoMedicion.get()), sizeof(float));
}