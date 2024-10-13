#include <iostream>
using namespace std;

/* 
Fa�a um programa que leia uma sequencia de N numeros e
informe o MENOR numero lido.
*/

int main() {
	
	int i, n;
	float num, menor;
	
	cout << "Entre com o tamanho da sequencia: ";
	cin >> n;
	
	if (n > 0) {
		
		// leitura do primeiro numero da sequencia fora do while
		cout << "Entre com um numero: ";
		cin >> num;
		menor = num;
		
		// um numero da sequencia ja foi lido
		i = 1;
		while (i < n) {
			
			cout << "Entre com um numero: ";
			cin >> num;
		
			if (num < menor) {
				menor = num;
			}
		
			i = i + 1;
		}	
		
		cout << "Menor: " << menor << endl;
	}
		
}
