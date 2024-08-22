#include <iostream>
using namespace std;

int main() {
	
    bool a, b;
    
    a = true;	// Verdadeiro
    b = false;	// Falso
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl << endl;
    
    // Operador AND
    cout << "a and a: " << (a && a) << endl;
    cout << "b and b: " << (b && b) << endl;
    cout << "a and b: " << (a && b) << endl << endl;
    
    
    // Operador OR
    cout << "a or a: " << (a || a) << endl;
    cout << "b or b: " << (b || b) << endl;
    cout << "a or b: " << (a || b) << endl << endl;
    
    // Operador NOT
	cout << "!a: " << (!a) << endl;
	cout << "!b: " << (!b) << endl;
	
}
