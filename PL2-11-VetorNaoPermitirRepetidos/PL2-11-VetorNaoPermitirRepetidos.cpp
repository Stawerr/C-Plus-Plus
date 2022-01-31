#include <iostream>
using namespace std;
void lerVetor(int* vec, int n) {

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout << "Introduza um valor na posição " << i<<"\n";
            cin >> vec[i];
            if (vec[i] == vec[j])
                cout << "Num repetido, introduza um valor na posição " << i<<"\n";
                cin >> vec[i];
        }
    }
}
int main()
{
    setlocale(LC_ALL, ("portuguese"));

    int n = 0;

    cout << "Qual o tamanho do vetor?"<<"\n";
    cin >> n;

    int* vec = new int[n];
    lerVetor(vec,n);
}