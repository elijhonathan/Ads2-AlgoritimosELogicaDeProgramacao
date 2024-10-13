#include <iostream>
using namespace std;

/* 
Fa�a um programa que leia uma sequencia de N numeros e
informe o maior numero lido.
*/

int main() {
	
	int i, n;
	float num, maior;
	
	cout << "Entre com o tamanho da sequencia: ";
	cin >> n;
	
	/*
	// Solucao considerando que os numeros sao positivos
	maior = 0;
	
	i = 0;
	while (i < n) {
		
		cout << "Entre com um numero: ";
		cin >> num;
		
		if (num > maior) {
			maior = num;
		}
		
		i = i + 1;
	}
	
	cout << "Maior: " << maior << endl;
	*/
	
	if (n > 0) {
		
		// leitura do primeiro numero da sequencia fora do while
		cout << "Entre com um numero: ";
		cin >> num;
		maior = num;
		
		// um numero da sequencia ja foi lido
		i = 1;
		while (i < n) {
			
			cout << "Entre com um numero: ";
			cin >> num;
		
			if (num > maior) {
				maior = num;
			}
		
			i = i + 1;
		}	
		
		cout << "Maior: " << maior << endl;
	}
	
}
