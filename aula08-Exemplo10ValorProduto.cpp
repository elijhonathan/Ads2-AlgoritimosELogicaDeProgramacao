#include <iostream>
using namespace std;

/*
Fa�a um programa que leia uma sequ�ncia de N n�meros e mostre 
o valor do produto dos n�meros lidos. 
*/

int main() {
	
	int i, n;
	float num, produto;
	
	cout << "Entre com o tamanho da sequencia: ";
	cin >> n;
	
	produto = 1;
	
	i = 0;
	while (i < n) {
		
		cout << "Entre com um numero: ";
		cin >> num;
		
		produto = produto * num;
		
		i = i + 1;
	}
	
	cout << "Produto: " << produto << endl;
	
	return 0;
}
