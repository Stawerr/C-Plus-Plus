#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, ("portuguese"));

    int n;
    int soma=0;
    int cont = 0;

    cout << "Introduza o valor de n" << "\n";
    cin >> n;
    
    int* vec = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "introduza um valor na posi��o " << i + 1 << "\n";
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++) {
        if (vec[i] % 2 != 0) {
            soma = soma + vec[i];
            cont = cont + 1;
        
        }
    }
    cout << "A m�dia dos �mpares �: " << double(soma / cont);
}
