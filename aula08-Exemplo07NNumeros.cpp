#include <iostream>
using namespace std;

/* 
Fa�a um programa que leia uma sequencia de n numeros, e para cada
numero lido, imprime o n�mero logo depois.
*/

int main() {
	
	int n, i, num;
	
	cout << "Entre com o valor de n: ";
	cin >> n;
	
	i = 0;
	while (i < n) {
		
		cout << "Entre com um numero: ";
		cin >> num;
		cout << num << endl;
		
		i = i + 1;
	}
	
	return 0;		
}
