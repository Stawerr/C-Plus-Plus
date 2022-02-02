#include <iostream>
using namespace std;
int comparaVetor(int* vec, int n) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        cout << "Introduza um valor na posição "<<i<< "\n";
        cin >> vec[i];
    }
    for (int i = 0; i < n; i++) {
           if (vec[i]<0) {
               vec[i] = 0;
               cont++;
           }
    }
    return cont;
}

int main()
{
    setlocale(LC_ALL, ("portuguese"));

    int n = 0;

    cout << "Quantos números quer ler?"<<"\n";
    cin >> n;

    int* vec = new int[n];

    int func= comparaVetor(vec,n);
    
    for (int i = 0; i < n; i++) {

        cout<< vec[i];
    }
    cout << "\n";
    cout << "Foram alterados "<<func<<" valores";
}