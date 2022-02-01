#pragma once
#include <string>
using namespace std;

class Pessoa {
	private: 
		string nome;
		int idade;
		double altura;

	public:
		Pessoa();
		Pessoa(string nome, int idade, int altura);
		string toString();
		
		void setNome(string nome);
		string getNome();

		void setIdade(int idade);
		int getIdade();

		void setAltura(int altura);
		double getAltura();
};
