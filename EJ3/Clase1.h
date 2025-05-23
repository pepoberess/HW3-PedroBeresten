#pragma once
#include <iostream>
#include <vector>
#include <type_traits>

using namespace std;

template <typename T>
class Vectores{
private:
    vector<string> palabras;
    vector<double> valores;
    vector<vector<int>> matriz;
public:
    void pushVec(const T& tipo){
        if constexpr(is_same_v<T, string>){
            palabras.push_back(tipo);
        }
        else if constexpr(is_same_v<T, double>){
            valores.push_back(tipo);
        }
        else if constexpr(is_same_v<T, vector<int>>){
            matriz.push_back(tipo);
        }
        else {
        cout << "Tipo no aplicable.\n";
        }
    }

    const vector<string>& getPalabras() const {
        return palabras;
    }

    const vector<double>& getValores() const {
        return valores;
    }

    const vector<vector<int>>& getMatriz() const {
        return matriz;
    }
};