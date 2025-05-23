
#include "Punto.h"

class Rectangulo {
private:
    Punto verticeInferiorIzquierdo;
    float ancho;
    float largo;

public:
    Rectangulo(float x = 0.0f, float y = 0.0f, float w = 1.0f, float h = 1.0f)
        : verticeInferiorIzquierdo(x, y), ancho(w), largo(h) {}

    void setVertice(Punto p);
    void setAncho(float a);
    void setLargo(float l);

    Punto getVertice() const;
    float getAncho() const;
    float getLargo() const; 
};