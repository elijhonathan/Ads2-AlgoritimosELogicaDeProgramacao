#include <iostream>

using namespace std;

int main() {

	int num1, num2, soma, sub, mult;

	cout << "Digite dois numeros inteiros:" << endl;
	cin >> num1 >> num2;
	
	soma = num1 + num2;
	sub = num1 - num2;
	mult = num1 * num2;

	cout << "Soma = " << soma << endl;
    cout << "Subtracao = " << sub << endl;
    cout << "Multiplicacao = " << mult << endl;
}
