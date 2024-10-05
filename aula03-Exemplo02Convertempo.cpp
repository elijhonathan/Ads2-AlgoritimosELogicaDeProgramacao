/*
Dado um número inteiro que representa uma quantidade de 
segundos, determinar o seu valor equivalente em horas, 
minutos e segundos. Se a quantidade de segundos for 
insuficiente para dar um valor em horas, o valor em horas 
deve ser 0 (zero). A mesma observação vale em relação 
aos minutos e segundos.

Por exemplo: 
3.600 segundos = 1 hora, 0 minutos, 0 segundos
3.500 segundos = 0 horas, 58 minutos e 20 segundos
*/
#include <iostream>
using namespace std;

int main() {
	
	int total_seg, horas, minutos, segundos, aux;

	cout << "Entre com o total de segundos:" << endl;
	cin >> total_seg;
    
	// 1 hora: 3600 segundos
	// 1 minuto: 60 segundos
	
	horas = total_seg / 3600;
	aux = total_seg % 3600;
	minutos = aux / 60;
	segundos = aux % 60;

	cout << "Horas: " << horas << endl;
	cout << "Minutos: " << minutos << endl;
	cout << "Segundos: " << segundos << endl;
	
}
