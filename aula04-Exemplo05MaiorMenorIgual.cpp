#include <iostream>
using namespace std;

int main() {
	
    int a, b;
    
    cout << "Entre com dois numeros inteiros: " << endl;
    cin >> a >> b;
    
    if (a > b) {
    	cout << "Maior: " << a << endl;
    	cout << "Menor: " << b << endl;
	}
	
	if (b > a) {
		cout << "Maior: " << b << endl;
    	cout << "Menor: " << a << endl;
	}
	
	if (a == b) {
		cout << "Os numeros sao iguais" << endl;
	}
}
