#include <bits/stdc++.h>
#include "Grafo.h"
#include "Algoritmo.h"

int main() {
    string path = "/home/inteli/Documents/inteli/8mod/navegacao-ROS/src/teste.csv";
    Grafo grafo(path);
    // grafo.imprimirGrafo();

    Algoritmo algoritmo(&grafo, {1,1}, {14, 14});
    algoritmo.buscaEmLargura();

    return 0;
}