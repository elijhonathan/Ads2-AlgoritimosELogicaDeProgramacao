#include <iostream>
using namespace std;
/* 
Fa�a um programa que leia dois n�meros inteiros e mostre uma
mensagem informando se eles s�o iguais. 
Se eles forem diferentes, mostre o maior n�mero.
*/ 
int main() {

	int num1, num2;

	cout << "Entre com dois numeros: " << endl;
	cin >> num1 >> num2;
	
	if (num1 == num2) {  
		cout << "Os numeros sao iguais" << endl;
	}	
	else {
		if (num1 > num2) {
			cout << "Maior: " << num1 << endl;
		}
		else {
			cout << "Maior: " << num2 << endl;
		}
	}	
}
