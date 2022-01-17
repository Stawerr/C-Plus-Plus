#include <iostream>
using namespace std;

int main()
{
	int n;
	int maior = 0;
	int cont = 0;

	while (cont < 5) {
		cout << "Introduza um valor para n: " << "\n";
		cin >> n;
		if (n > maior && n %2== 0) {
			maior = n;
		}
		if(n %2!=0){
			cont = cont + 1;
		}
	}
	if (maior == 0) {
		cout << "Nao foram introduzidos numeros pares";
	}
	else {
		cout << "O maior numero e: " << maior;
	}
	
}