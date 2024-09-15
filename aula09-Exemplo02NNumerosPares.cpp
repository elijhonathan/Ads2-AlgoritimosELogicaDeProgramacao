#include <iostream>
using namespace std;

/* 
Fa�a um programa que leia uma sequ�ncia de n n�meros
e mostre quantos s�o n�meros pares.
*/

int main() {
	
	int n, i, num, cont;
	
	cout << "Entre com o valor de n: ";
	cin >> n;
	cout << endl;
	
	// contador de numeros pares
	cont = 0;
	
	i = 0;
	while (i < n) {
		
		cout << "Entre com um numero: ";
		cin >> num;

		if (num % 2 == 0) {
			cont = cont + 1;
		}
		
		// nao esquecer de incrementar i
		i = i + 1;
	}
	
	cout << "Quantidade de numeros pares: " << cont << endl;
	
	return 0;		
}
