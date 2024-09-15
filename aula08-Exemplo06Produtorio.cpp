#include <iostream>
using namespace std;

/*
Fa�a um programa que calcula e mostra o produto dos n�meros
de 1 at� N.
*/

int main() {
	
	int i, n;
	double produto;
	
	cout << "Entre com o valor de N: ";
	cin >> n;
	
	produto = 1;
	
	i = 1;
	while (i <= n) {
		produto = produto * i;
		i = i + 1;
	}
	
	cout << "Produtorio: " << produto << endl;
	
	return 0;
}
