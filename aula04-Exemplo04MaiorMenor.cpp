#include <iostream>
using namespace std;

int main() {
	
    int a, b;
    
    cout << "Entre com dois numeros inteiros distintos: " << endl;
    cin >> a >> b;
    
    if (a > b) {
    	cout << "Maior: " << a << endl;
    	cout << "Menor: " << b << endl;
	}
	else {
		cout << "Maior: " << b << endl;
    	cout << "Menor: " << a << endl;
	}
}
