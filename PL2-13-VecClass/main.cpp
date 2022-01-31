#include <iostream>
#include "vectores.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, ("portuguese"));

    int n = 0;

    cout << "Qual o tamanho do vetor?" << "\n";
    cin >> n;

    int* vec = new int[n];

    Vectores::lerVector(n, vec);
    Vectores::mostrarVector(n, vec);
    cout<<"\n"<<"A média é " << Vectores::mediaVector(n, vec)<<"\n";


}