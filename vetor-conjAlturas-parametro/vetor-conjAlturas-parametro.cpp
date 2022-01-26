#include <iostream>
using namespace std;
void verificaAlturaEntre(double* vec, int n, int* cont) {

    for (int i = 0; i < n; i++) {
        cout << "Qual a altura do aluno em m?" << "\n";
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++) {
        if (vec[i] > 1.50 && vec[i] < 1.75) {
            *cont = *cont + 1;
        }
    }
}
int main()
{
    setlocale(LC_ALL, ("portuguese"));
    int n = 0;
    int cont = 0;
    cout << "Quantos alunos tem a turma?" << "\n";
    cin >> n;

    double* vec = new double[n];

    verificaAlturaEntre(vec, n, &cont);
    cout <<"Existem " << cont<< " alunos com a idade entre 1.5m e 1.7m";
}