#include "Clase1.h"
#include "Clase2.h"

int main() {
    Vectores<string> v1;
    Vectores<double> v2;
    Vectores<vector<int>> v3;

    v1.pushVec("Hola");
    v1.pushVec("Mundo");

    v2.pushVec(1.2);
    v2.pushVec(2.5);

    v3.pushVec({1, 2});
    v3.pushVec({3, 4});
    JSON json;

    json.nuevaClave("palabras", v1.getPalabras());
    json.nuevaClave("vec_doubles", v2.getValores());
    json.nuevaClave("listas", v3.getMatriz());

    cout << json.hacerJSON() << endl;
    return 0;
}