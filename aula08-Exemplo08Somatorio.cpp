#include <iostream>
using namespace std;

/* 
Fa�a um programa que leia uma sequencia de N numeros e mostre 
o somatorio dos numeros lidos.
*/

int main() {
	
	int n, i, num, soma;
	
	cout << "Entre com o valor de n: ";
	cin >> n;
	
	soma = 0;
	
	i = 0;
	while (i < n) {
		
		cout << "Entre com um numero: ";
		cin >> num;
		soma = soma + num;
		
		i = i + 1;
	}
	
	cout << "Somatorio: " << soma << endl;
	
	return 0;		
}
