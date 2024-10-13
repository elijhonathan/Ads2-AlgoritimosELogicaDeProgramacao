#include <iostream>
using namespace std;

/* 
Fa�a um programa que leia um numero inteiro e informe
se esse numero eh primo.
*/

int main() {
	
	int i, n, num, cont;
	
	cout << "Entre com um numero: ";
	cin >> num;
	
	cont = 0;
	n = num;
	i = 1;
	
	while (i <= n) {
		
		if (num % i == 0) {
			cont = cont + 1;
		}
		
		i = i + 1;
	}
	
	if (cont == 2) {
		cout << "Primo" << endl;
	}
	else {
		cout << "Nao primo" << endl;
	}
		
}
