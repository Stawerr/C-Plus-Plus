#include <iostream>
using namespace std;
void lerVetor(int *vec) {
    for (int i = 0; i < 5; i++) {
        cout << "Introduza um valor na posição " << i + 1 << "\n";
        cin >> vec[i];
    }

}
int contNegativo(int *vec) {
    int contneg=0;
    for (int i = 0; i < 5; i++) {
        if (vec[i] < 0) {
            contneg = contneg + 1;
        }
    }
    return contneg;
}
double contMediaPositivos(int *vec) {
    int contPos = 0;
    int cont = 0;
    int media = 0;
    for (int i = 0; i < 5; i++) {
        if (vec[i] > 0) {
            contPos = contPos + vec[i];
            cont = cont + 1;
        }
    }
    media = (double(contPos / cont));
    return media;
}
int contMultiplos(int *vec) {
    int cont = 0;
    for (int i = 0; i < 5; i++) {
        if (vec[i] %3==0 && vec[i] % 5 == 0) {
            cont = cont + 1;
        }
    }
    return cont;
}

int main()
{
	setlocale(LC_ALL, ("portuguese"));

    int valor = 0;

    int vec[5];
    lerVetor(vec);

    do {

        cout << "Qual o programa a correr? Prima [1] para contar numeros Negativos?"<<"\n";
        cout << "Qual o programa a correr? Prima [2] para Media de Positivos?" << "\n";
        cout << "Qual o programa a correr? Prima [3] para Multiplos de 3 e 5?" << "\n";
        cout << "Para ler outro vetor Prima [4]" << "\n";
        cout << "Prima 9 para sair" << "\n";
        cin >> valor;

        if (valor == 1) {
            // Contar numeros Negativos
            int contNegativoo = contNegativo(vec);
            cout << "Existem " << contNegativoo << " números negativos" << "\n";
        }
        if (valor == 2) {
            // Contar Media de Positivos
            int contMediaPos = contMediaPositivos(vec);
            cout << "A média de positivos é: " << contMediaPos << "\n";
        }
        if (valor == 3) {
            // Contar Multiplos de 3 e 5
            int contMultiploss = contMultiplos(vec);
            cout << "Existem " << contMultiploss << " multiplos de 3 e 5" << "\n";
        }
        if (valor == 4) {
            // Ler outro vetor
            lerVetor(vec);
        }
    } while (valor!=9);
}

