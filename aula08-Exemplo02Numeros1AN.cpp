#include <iostream>
using namespace std;

/* 
Fa�a um programa que imprima os n�meros de 1 � N.

Obs.: A partir deste exemplo, a vari�vel contadora do while 
ser� chamada de i (por ser um padr�o dos programadores).
*/

int main() {
	
	int n, i;
	
	cout << "Entre com o valor de n: ";
	cin >> n;
	cout << endl;
	
	// contador da repeti��o e tamb�m o primeiro n�mero a ser exibido
	i = 1;
	while (i <= n) {
		// exibe o n�mero
		cout << i << " ";
		
		// incrementa o contador da repeti��o
		i = i + 1;
	}
	
	return 0;	
}
