#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Agenda.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, ("portuguese"));
	string nome;
	int idade;
	double altura;

	Pessoa p;

	cout << "Introduza o seu nome"<<"\n";
	cin >> nome;
	p.setNome(nome); 

	cout << "Introduza a sua idade" << "\n";
	cin >> idade;
	p.setIdade(idade);

	cout << "Introduza a sua altura" << "\n";
	cin >> altura;
	p.setAltura(altura);


	cout<< p.getNome() << "\n"; 
	cout << p.getIdade() << "\n";
	cout << p.getAltura() << "\n";

	Pessoa b(nome, idade, altura);
	cout << b.toString();

	char linha[] = "------------------------------------------------\n";

	Agenda A;
	A.armazenaPessoa("Abel", 22, 1.78);
	A.armazenaPessoa("Tiago", 20, 1.80);
	A.imprimePovo();
	A.armazenaPessoa(b.getNome(),b.getIdade(),b.getAltura());
	cout << linha;

	int posicao = A.buscaPessoa("Tiago");

	if (posicao > 0)

		A.imprimePessoa(posicao);

	cout << linha;

	//A.removePessoa("Tiago");
	A.imprimePovo();
	cout << linha;
}