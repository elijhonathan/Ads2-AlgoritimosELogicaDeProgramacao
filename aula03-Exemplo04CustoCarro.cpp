/*
O custo ao consumidor de um carro novo a soma do custo de 
fabrica com a percentagem do distribuidor e dos impostos 
(aplicados ao custo de fabrica). 
Supondo que a percentagem do distribuidor seja de 28% e 
os impostos de 45%, faça um programa que leia o custo de 
fabrica de um carro e escreva o custo ao consumidor.
*/

#include <iostream>
using namespace std;

int main() {
	float cf, dist, imp, total;

	cout << "Entre com o custo de fabrica: " << endl;
	cin >> cf;

    dist = (cf * 28)/100;
    imp = (cf * 45)/100;
    total = cf + dist + imp;

	cout << "Custo ao consumidor: " << total << endl;
}
