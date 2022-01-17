#include <iostream>
using namespace std;
int converterEntrada(int hora,int minutos,int segundos){
    int soma = 0;
    hora = 60 * 60 * hora;
    minutos = 60 * minutos;
    soma = hora + minutos + segundos;
    return soma;
}
int intervalo(int entrada, int saida) {
    int total=0;

    total = saida - entrada;

    return total;
}
int conversaoInversa(int intervaloTotal) {

    return 0;
}

int main()
{
    setlocale(LC_ALL, ("portuguese"));

    int horaE, minutoE, segundoE;
    int horaS, minutoS, segundoS;

    cout << "Introduza a hora de entrada HH MM SS";
    cin >> horaE >> minutoE >> segundoE;

    cout << "Introduza a hora de saida HH MM SS";
    cin >> horaS >> minutoS >> segundoS;

    int convertidoEntrada = converterEntrada(horaE, minutoE, segundoE);
    int convertidosaida = converterEntrada(horaS, minutoS, segundoS);

    int intervaloTotal = intervalo(convertidoEntrada, convertidosaida);

    int intervaloFinal = conversaoInversa(intervaloTotal);

}