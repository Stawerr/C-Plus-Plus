#include <iostream>
using namespace std;
int main()
{
    int valor = 0;
    cout << "Qual o programa a correr 1-A 2-B 3-C?";
    cin >> valor;

    if (valor ==1){

    int a;
    int b;

    cout << "Introduza o valor de a" << "\n";
    cin >> a;
    cout << "Introduza o valor de b" << "\n";
    cin >> b;
    cout << a + b;
    }
    else if (valor ==2) {
        double c, d, e;
        cout << "Introduza o valor de c" << "\n";
        cin >> c;
        cout << "Introduza o valor de d" << "\n";
        cin >> d;
        cout << "Introduza o valor de e" << "\n";
        cin >> e;

        cout << (c + d + e) / 3;
    }
    else if (valor == 3) {

        double f, g;
        cout << "Introduza o valor de f" << "\n";
        cin >> f;
        cout << "Introduza o valor de f" << "\n";
        cin >> g;
        cout << f / g;
    }
}

