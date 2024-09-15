#include <iostream>
using namespace std;

/* 
Fa�a um programa que leia e mostre o n�mero lido, enquanto nao for 
digitado zero.
*/

int main() {
	
	int num;
	
	cout << "Entre com um numero: ";
	cin >> num;
	
	while (num != 0) {
		cout << "Numero: " << num << endl;
		cout << "Entre com um numero: ";
		cin >> num;
	}
	
	return 0;	
}
