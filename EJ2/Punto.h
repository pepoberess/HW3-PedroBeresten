#pragma once

class Punto {
private:
    float x;
    float y;

public:
    Punto(float x = 0.0f, float y = 0.0f) : x(x), y(y) {}

    void setX(float valor);
    void setY(float valor);

    float getX() const;
    float getY() const;
};