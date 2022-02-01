#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Agenda.h"

using namespace std;
Agenda::Agenda() {

}
Agenda::Agenda(Pessoa* povo) {
	this->povo = povo;
}
void Agenda::armazenaPessoa(string nome, int idade, float altura) {
	int i=0;

	povo[i].setNome(nome);
	povo[i].setIdade(idade);
	povo[i].setAltura(altura);
	i++;
}
int Agenda::buscaPessoa(string nome) {
	
}
void Agenda::imprimePovo() {

}
void Agenda::imprimePessoa(int i) {

}