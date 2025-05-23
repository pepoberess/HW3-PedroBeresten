#include "ProcesadorFigura.h"

int main(){
    Punto p(0, 0);
    Circulo c(p, 5.0f);
    Elipse e(p, 2.0f, 4.0f);
    Rectangulo r(0, 0, 4.0f, 3.0f);

    cout << "Área del círculo: " << ProcesadorFigura<Circulo> :: areaFigura(c) << endl;
    cout << "Área de la elipse: " << ProcesadorFigura<Elipse> :: areaFigura(e) << endl;
    cout << "Área del rectángulo: " << ProcesadorFigura<Rectangulo> :: areaFigura(r) << endl;
    
    return 0;
}