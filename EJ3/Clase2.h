#pragma once
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>

using namespace std;

class JSON{
public:
    unordered_map<string, vector<double>> valores;
    unordered_map<string, vector<string>> palabras;
    unordered_map<string, vector<vector<int>>> matriz;

    void nuevaClave(const string& clave, const vector<double>& valor) {
        valores[clave] = valor;
    }

    void nuevaClave(const string& clave, const vector<string>& valor) {
        palabras[clave] = valor;
    }

    void nuevaClave(const string& clave, const vector<vector<int>>& valor) {
        matriz[clave] = valor;
    }

    string hacerJSON() const {
        ostringstream out;
        out << "{ ";
        // vector de double
        for (const auto& [clave, valor] : valores){
            out << "\"" << clave << "\"" << " : [";
            for(size_t i = 0; i < valor.size(); i++){
                out << valor.at(i);
                if (i + 1 < valor.size()){
                    out << ", ";
                }
            }
        }
        out << "],\n";
        // vector de strings
        for (const auto& [clave, valor] : palabras){
            out << "\"" << clave << "\"" << " : [";
            for(size_t i = 0; i < valor.size(); i++){
                out << valor.at(i);
                if (i + 1 < valor.size()){
                    out << ", ";
                }
            }
        }
        out << "],\n";
        // matriz de int
        for (const auto& [clave, valor] : matriz){
            out << "\"" << clave << "\"" << " : [\n";
            for (size_t i = 0; i < valor.size(); i++){
                out << "\t [";
                for (size_t j = 0; j < valor[i].size(); j++){
                    out << valor[i][j];
                    if (j + 1 < valor[i].size()){
                        out << ", ";
                    }
                }
                out << "]";
                if (i + 1 < valor.size()){
                    out << ",\n";
                }   
            }
        }
        out << "\n}";

        return out.str();
    }
};
