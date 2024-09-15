#include <iostream>
using namespace std;

/*
Fa�a um programa que leia tres numeros inteiros e some
os n�meros que sao positivos.
*/

int main() {
	
	int num1, num2, num3;
	int soma;
	
	cout << "Entre com tres numeros inteiros: " << endl;
	cin >> num1 >> num2 >> num3;
	
	soma = 0;
	
	if (num1 > 0) {
		soma = soma + num1;
	}
	
	if (num2 > 0) {
		soma = soma + num2;
	}
	
	if (num3 > 0) {
		soma = soma + num3;
	}
	
	cout << "Soma dos positivos: " << soma << endl;
	
}
