#include <iostream>
using namespace std;

int main() {

	int num1, num2, num3;

	cout << "Entre com tres numeros distintos: " << endl;
	cin >> num1 >> num2 >> num3;

	if (num1 > num2 && num1 > num3) {
		cout << "Maior: " << num1;
	}
	
	if (num2 > num1 && num2 > num3) {
		cout << "Maior: " << num2;
	}
	
	if (num3 > num1 && num3 > num2) {
		cout << "Maior: " << num3;
	}

}
