#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, ("portuguese"));

    int n;
    int cont = 0;

    cout << "Introduza o valor de n" << "\n";
    cin >> n;

    int* vec = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "introduza um valor na posição " << i + 1 << "\n";
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++) {
        if (vec[i] % 3 == 0) {
            cont = cont + 1;
        }
    }

    cout << "Existem " << cont << " multiplos de 3";
}