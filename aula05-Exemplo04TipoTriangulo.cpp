#include <iostream>
using namespace std;

/* Fa�a um programa que leia tr�s valores representando as 
medidas dos lados de um tri�ngulo e imprima o tipo do 
tri�ngulo:  

- Equil�tero (tr�s lados iguais)
- Escaleno (todos os lados s�o diferentes)
- Is�sceles (apenas dois lados iguais)
*/

int main() {

	int a, b, c;

	cout << "Entre com tres medidas do triangulo: " << endl;
	cin >> a >> b >> c;

	if (a == b && b == c) {
		cout << "Equilatero" << endl;
	}
	
	if ((a != b) && (a != c) && (b != c)) {
		cout << "Escaleno" << endl;
	}
	
	if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a) ) {
		cout << "Isosceles" << endl;
	}
	
