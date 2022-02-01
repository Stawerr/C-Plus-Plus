#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;
Pessoa::Pessoa(){

}
Pessoa::Pessoa(string nome, int idade, int altura) {
	this->nome = nome;
	this->idade = idade;
	this->altura = altura;
}
string Pessoa::toString() {
	return "O " + this->nome + " tem " + to_string(this->idade) + " anos e mede " + to_string(this->altura);
}

void Pessoa::setNome(string nome) {
	this->nome = nome;
}
void Pessoa::setIdade(int idade) {
	this->idade = idade;
}
void Pessoa::setAltura(int altura) {
	this->altura = altura;
}
string Pessoa::getNome() {
	return nome;
}
int Pessoa::getIdade() {
	return idade;
}
double Pessoa::getAltura() {
	return altura;
}