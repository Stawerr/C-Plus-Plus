
#include <iostream>
using namespace std;
int main()
{
    int n;


    cout << "Qual o tamanho do vetor?";
    cin >> n;

    int* vec = new int [n];

    int maior=0;
    int posMaior = 0;
    int posMenor = 0;


    for (int i = 0; i < n; i++){
        cout << "introduza um valor na posi��o" << i + 1;
        cin >> vec[i];
        if (vec[i] > maior) {
            maior = vec[i];
            posMaior = i;
            
        }
    }

    int menor = vec[0];

    for (int i = 0; i < n; i++) {
            if (vec[i] < menor) {
                menor = vec[i];
                posMenor = i;
            }
    }

    cout << "O maior � " << maior<< " na posicao "<< posMaior<< "\n";
    cout << "O menor � " << menor << " na posicao " << posMenor;
}


