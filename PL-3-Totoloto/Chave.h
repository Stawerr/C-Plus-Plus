#pragma once
#include<iostream>
#include<string>
using namespace std;

class Chave {


public:
	static void gerarChaveAleatoria(int* ch);
	static void lerChave(int* ch);
	static void imprimirChave(int n, int* ch);
	static void ordenaChave(int* ch);
	static int verifPremio(int* ch1, int* ch2);
	static int pesquisaChave(int* ch1);
};