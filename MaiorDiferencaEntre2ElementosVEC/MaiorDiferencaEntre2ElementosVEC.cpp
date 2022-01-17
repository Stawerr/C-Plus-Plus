
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, ("portuguese"));

    int n;

    cout << "Introduza o valor de n" << "\n";
    cin >> n;

    int* vec = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "introduza um valor na posição " << i + 1 << "\n";
        cin >> vec[i];
    }

    int valor = abs(vec[0]-vec[1]);

    for (int i = 1; i < n-1; i++) {
        if (abs(vec[i]-vec[i+1]) > valor ) {
            valor = abs(vec[i] - vec[i + 1]);
        }
    }
  
    cout << valor;
}



