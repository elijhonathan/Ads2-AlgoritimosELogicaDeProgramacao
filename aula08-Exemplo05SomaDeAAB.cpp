#include <iostream>
using namespace std;

/* 
Fa�a um programa que calcule e mostre a soma dos numeros inteiros de A ate B 
(incluindo A e incluindo B).
*/

int main() {
	
	int i, a, b, n;
	int soma;
	
	cout << "Entre com os valores de A e B: " << endl;
	cin >> a >> b;
	
	soma = 0;
	
	i = a;
	n = b;
	while (i <= n) {
		soma = soma + i;
		i = i + 1;
	}
	
	cout << "Somatorio: " << soma << endl;
	
	return 0;	
}
