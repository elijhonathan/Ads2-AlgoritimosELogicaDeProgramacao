#include <iostream>
using namespace std;

int main() {
	
    int a, b, divisao;
    
    cout << "Entre com o dividendo e o divisor: " << endl;
    cin >> a >> b;
    
	if (b != 0) {
		divisao = a/b;
		cout << "Resultado: " << divisao << endl;	
	}
	else {
		cout << "Divisao por zero!" << endl;
		cout << "Se liga!" << endl;
	}
    
	cout << "Ate a proxima!" << endl;
	 
}
