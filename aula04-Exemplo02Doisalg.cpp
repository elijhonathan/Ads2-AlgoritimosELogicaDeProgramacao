/*
Qualquer n�mero natural de quatro algarismos pode ser dividido
em duas dezenas formadas pelos seus dois primeiros e dois
�ltimos d�gitos (1297 = 12 e 97; 5314 = 53 e 14). 

Fa�a um programa que leia um n�mero inteiro n (de 4 algarismos) e
verifica se a raiz quadrada de n � igual a soma das dezenas de
n. 

Por exemplo: n = 9801, dezenas 98 e 01; soma = 98 + 01 = 99. 
Raiz quadrada de n = 99. Portanto, a raiz quadrada de 9801
� igual a soma de suas dezenas. 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int num, dez1, dez2, soma;
	float raiz;
	
	cout << "Entre com um numero inteiro de quatro digitos: " << endl;
	cin >> num;
	
	dez1 = num / 100;
	dez2 = num % 100;
	soma = dez1 + dez2;
	raiz = sqrt(num);
	
	cout << "Dezena 1: " << dez1 << endl;
	cout << "Dezena 2: " << dez2 << endl;
	cout << "Soma das dezenas: " << soma << endl;
	cout << "Raiz quadrada: " << raiz << endl;
	
	if (soma == raiz) {
		cout << "A raiz quadrada eh igual a soma de suas dezenas" << endl;	
	}
	else {
		cout << "Soma das dezenas nao eh igual a raiz" << endl;
	}
		
}
