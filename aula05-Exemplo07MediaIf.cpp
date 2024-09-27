#include <iostream>
#include <cmath>
using namespace std;

/*
Fa�a um programa que leia a m�dia de um aluno e mostre a sua 
situa��o. Caso a m�dia seja maior ou igual a 70, o programa 
deve emitir a mensagem �Aprovado�. Caso contr�rio, se a m�dia
for menor do que 40, a mensagem a ser exibida � �Reprovado�; 
sen�o, deve ser exibida a mensagem �Exame Final�.
*/

int main() {
	
	float media;
	
	cout << "Entre com a media do aluno: " << endl;
	cin >> media;
	
	if (media >= 70) {
		cout << "Aprovado" << endl;	
	}
	else {
		
		if (media < 40) {
			cout << "Reprovado" << endl;
		}
		else {
			cout << "Exame Final" << endl;
		}		
	}	
}
