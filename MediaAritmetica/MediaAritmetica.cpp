
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Introduza o numero de alunos" << "\n";
    cin >> n;

    int* vec = new int[n];
    int soma=0;

    for (int i = 0; i < n; i++) {
        cout << "Introduza a nota do alunos" << i << "\n";
        cin >> vec[i];
        soma += vec[i];
    }
    cout <<"A media e: "<< float(soma / n);
}

