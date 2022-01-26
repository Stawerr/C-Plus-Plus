#include <iostream>
using namespace std;

int fatorial(int n) {
    int mult = 1;

    for (int i = n; i > 1; i--) {
        mult = mult * i;
    }
    return mult;
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int n=0;

    cout << "Qual o número a calcular o fatorial? "<<"\n";
    cin >> n;

    int fato = fatorial(n);
    cout <<"O fatorial é "<< fato;

}