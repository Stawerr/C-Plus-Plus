#include <iostream>
#include "Circulo.h"
using namespace std;
int main()
{


    double raio1 = 0;
    double raio2 = 0;
    int x1, x2, y1, y2 = 0;

    cout << "Introduza o raio do circulo 1 " << "\n";
    cin >> raio1;
    cout << "Introduza o raio do circulo 2 " << "\n";
    cin >> raio2;

    cout << "Introduza o raio do X1 " << "\n";
    cin >> x1;
    cout << "Introduza o raio do Y1 " << "\n";
    cin >> y1;
    cout << "Introduza o raio do X2 " << "\n";
    cin >> x2;
    cout << "Introduza o raio do Y2 " << "\n";
    cin >> y2;

   double var= Circulo::somaCircunferencia( raio1, raio2);

   cout << "A soma das circunferencias é " << var<<"\n";

   double var1 = Circulo::areaMaior(raio1, raio2);



   if (var1 == 0) {
        cout << "O circulo com maior area é o Circulo 1" "\n";
   }
   else {
       cout << "O circulo com maior area é o Circulo 2" "\n";
   }

   double dist = Circulo::imprimirDistancia(x1, y1, x2, y2);

   cout << "A soma e " << dist;
}