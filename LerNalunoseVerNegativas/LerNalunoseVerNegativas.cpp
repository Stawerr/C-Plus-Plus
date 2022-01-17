
#include <iostream>
using namespace std;

int main()
{
    int n;
    int cont = 0;

    cout << "Introduza o numero de alunos" << "\n";
    cin >> n;

    int* vec = new int[n];


    for (int i = 0; i < n; i++) {
        cout << "Introduza a nota do alunos" << i << "\n";
        cin >> vec[i];
        if (vec[i] < 10) {
            cont = cont + 1;
        }
    }
    cout << "N Negativas: " << cont;
}


