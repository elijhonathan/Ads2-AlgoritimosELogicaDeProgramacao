#include <iostream>
using namespace std;

/* 
Fa�a um programa que mostre os numeros inteiros de A ate B 
(incluindo A e incluindo B).
*/

int main() {
	
	int i, n, a, b;
	
	cout << "Entre com o valor de A: ";
	cin >> a;
	
	cout << "Entre com o valor de B: ";
	cin >> b;
	
	i = a;
	n = b;
	while (i <= n) {
		// imprimindo os n�meros um ao lado do outro
		cout << i << " ";
		i = i + 1;
	}
	
	return 0;			
}
