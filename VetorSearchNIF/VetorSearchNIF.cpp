#include <iostream>
using namespace std;
int validaNim(int* vec,int n) {
    int search = 0;
    int aux = -1;

    for (int i = 0; i < n; i++) {
        cout << "Introduza o NIF na posição "<<"["<< i <<"]"<<"\n";
        cin >> vec[i];
    }
    cout << "Qual o NIF a pesquisar?"<<"\n";
    cin >> search;

    for (int i = 0; i < n; i++) {
        if (search == vec[i]) {
            aux = i;
        }
    }
    return aux;
}
int main()
{
    setlocale(LC_ALL, ("portuguese"));
    int n = 0;
    int val = 0;
    cout << "Introduza o número de NIF a validar"<<"\n";
    cin >> n;

    int* vec = new int[n];
    val= validaNim(vec, n);

    if (val == -1){
        cout << "O NIF não existe";
    }
    else {
        cout << "O NIF encontra-se na posição " << "["<<val<<"]";
    }
}