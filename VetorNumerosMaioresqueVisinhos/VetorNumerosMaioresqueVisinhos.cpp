#include <iostream>
using namespace std;
int main()
{
	int n;
	setlocale(LC_ALL, ("portuguese"));

	cout << "Introduza o valor de n"<< "\n";
	cin >> n;

	int* vec = new int[n];
	int cont = 0;

	for (int i = 0; i < n; i++) {
		cout << "introduza um valor na posição " << i + 1<< "\n";
		cin >> vec[i];
	}

	for (int i = 1; i < n-1; i++) {
		
		if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1]) {
			cont = cont + 1;
		}
	}
	cout << cont;

}
