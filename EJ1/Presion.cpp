#include "Presion.h"

void Presion :: serializar(ofstream& out) const{
    MedicionBase :: serializar(out);
    out.write(reinterpret_cast<const char*>(&presionEstatica), sizeof(float));
    out.write(reinterpret_cast<const char*>(&presionDinamica), sizeof(float));
}
void Presion :: deserializar(ifstream& in){
    MedicionBase :: deserializar(in);
    in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(float));
    in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(float));
}

void Presion :: imprimir() const{
    cout << "Presión Estática: " << presionEstatica << ", Presión Dinámica: " << presionDinamica
    << ", Tiempo: " << MedicionBase :: getTiempo() << "\n";
}