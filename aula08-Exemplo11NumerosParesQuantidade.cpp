#include <iostream>
using namespace std;

/*
Fa�a um programa que leia tres numeros inteiros e conte 
quantos s�o n�meros pares.
*/

int main() {
	
	int num1, num2, num3;
	int cont;
	
	cout << "Entre com tres numeros inteiros: " << endl;
	cin >> num1 >> num2 >> num3;
	
	cont = 0;
	
	if (num1 % 2 == 0) {
		cont = cont + 1;
	}
	
	if (num2 % 2 == 0) {
		cont = cont + 1;
	}
	
	if (num3 % 2 == 0) {
		cont = cont + 1;
	}
	
	cout << "Quantidade de numeros pares: " << cont << endl;	
}
