#include <iostream>
using namespace std;

int main()
{
	int n;
	int soma = 0;
	int cont = 0;

	cout << "Introduza um valor para n: " << "\n";
	cin >> n;

	while (n != 0) {
		soma = soma + n;
		cont = cont + 1;
		cout << "Introduza um valor para n: " << "\n";
		cin >> n;
	}
	if (n != 0) {
		cout << "A media e: " << float(soma / cont);
	}
}
