#include <iostream>
using namespace std;

/*
Fa�a um programa que leia uma sequ�ncia de N n�meros e mostre 
a m�dia dos n�meros lidos. 
*/

int main() {
	
	int i, n;
	float num, soma, media;
	
	cout << "Entre com o tamanho da sequencia: ";
	cin >> n;
	
	soma = 0;
	
	i = 0;
	while (i < n) {
		
		cout << "Entre com um numero: ";
		cin >> num;
		
		soma = soma + num;
		
		i = i + 1;
	}
	
	media = soma/n;
	
	cout << "Media: " << media << endl;
	
	return 0;
}
