#ifndef GRAFO_H
#define GRAFO_H

#include <bits/stdc++.h>
using namespace std;

class Grafo {
private:
    vector<vector<char>> mapa;                   
    map<pair<int,int>, int> coordToId;           
    vector<vector<int>> listaAdj;                    

    string nomeArquivo;

    int idContador = 0;
    int numLinhas = 0;
    int numColunas = 0;

    void lerCSV();
    void construirArestas();

public:
    Grafo(string nomeArquivo);
    void imprimirGrafo();
};

#endif