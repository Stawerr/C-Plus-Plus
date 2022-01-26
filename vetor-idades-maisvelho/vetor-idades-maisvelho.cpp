#include <iostream>
using namespace std;
void verificaMaisVelho(int* vec, int n, int *idade) {

    for (int i = 0; i < n; i++) {
            cout << "Qual a idade do aluno?" << "\n";
            cin >> vec[i];   
        }
 
    for (int i = 0; i < n; i++) {
        if (vec[i] > *idade) {
            *idade = vec[i];
       }
    }
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    int n = 0;
    int idade=0;
    cout << "Quantos alunos tem a turma?"<<"\n";
    cin >> n;

    int* vec = new int[n];


    verificaMaisVelho(vec, n, &idade);
    cout << idade;
}
