#include <iostream>
using namespace std;

/* 
Fa�a um programa que leia a nota de um aluno e mostre o 
conceito de acordo com a tabela abaixo.

nota > 90			A
75 < nota <= 90		B
60 < nota <= 75		C
40 < nota <= 60		D
nota <= 40			E
*/

int main() {

	int nota;

	cout << "Entre com a nota do aluno: ";
	cin >> nota;

	if (nota > 90) {
		cout << "Conceito A" << endl;
	}
	
	/* Errado!
	if (75 < nota <= 90) {
		cout << "Conceito B" << endl;
	}
	*/
	
	if (nota > 75 && nota <= 90) {
		cout << "Conceito B" << endl;
	}
	
	if (nota > 60 && nota <= 75) {
		cout << "Conceito C" << endl;
	}
	
	if (nota > 40 && nota <= 60) {
		cout << "Conceito D" << endl;
	}
	
	if (nota <= 40) {
		cout << "Conceito E" << endl;
	}
	
}
