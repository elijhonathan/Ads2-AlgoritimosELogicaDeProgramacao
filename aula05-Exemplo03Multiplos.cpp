#include <iostream>
using namespace std;

int main() {

	int num1, num2;

	cout << "Entre com dois numeros: " << endl;
	cin >> num1 >> num2;

	if ((num1 % num2 == 0) || (num2 % num1 == 0)) {
		cout << "Multiplos" << endl;
	}
	else {
		cout << "Nao multiplos" << endl;
	}

}
