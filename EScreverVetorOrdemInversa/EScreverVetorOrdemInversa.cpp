#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Introduza o tamanho do vetor: " << "\n";
	cin >> n;

	int* vec = new int[n];

	for (int i = 0; i < n; i++) {
		cout << "Introduza um numero: " << "\n";
		cin >> vec[i];

	}

	for (int i = n-1; i >= 0; i--) {
		cout << "[" << vec[i] <<"]";
	}
}