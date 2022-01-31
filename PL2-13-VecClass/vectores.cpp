#include <iostream>
#include "vectores.h"
using namespace std;

void Vectores::lerVector(int n, int* vec) {
    for (int i = 0; i < n; i++) {
        cout << "Introduza um valor na posição " << i << "\n";
        cin >> vec[i];
    }
}
void  Vectores::mostrarVector(int n, int* vec) {
    for (int i = 0; i < n; i++) {
        cout<< vec[i]<<"\n";
    }
}
double  Vectores::mediaVector(int n, int* vec) {
    int soma = 0;
    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] % 2 != 0) {
            soma = soma + vec[i];
            cont = cont + 1;

        }
    }
    double media = soma / cont;
    return media;
}
double  Vectores::modaVector(int n, int* vec) {

}
void  Vectores::ordenarVector(int n, int* vec) {
    int aux = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (vec[i] < vec[j]) {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}
int  Vectores::maiorValorVector(int n, int* vec) {
    int aux = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] > aux) {
            aux = vec[i];
        }
    }
    return aux;
}
int  Vectores::menorValorVector(int n, int* vec) {
    int aux = vec[0];
    for (int i = 0; i < n; i++) {
        if (vec[i] < aux) {
            aux = vec[i];
        }
    }
    return aux;
}