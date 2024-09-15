#include <iostream>
using namespace std;

int main() {
	
	int i, n, soma;
	
	cout << "Entre com o valor de N: ";
	cin >> n;
	cout << endl;
	
	soma = 0;
	
	i = 1;
	while (i <= n) {
		soma = soma + i;
		i = i + 1;
	}
	
	cout << "Somatorio: " << soma << endl;
	
	return 0;
}
