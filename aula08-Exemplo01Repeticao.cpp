#include <iostream>
using namespace std;

int main() {
	
	int n, contador;
	
	// n: quantas vezes quer repetir
	n = 5;
	
	// variavel contadora do while
	contador = 1;
	
	while (contador <= n) {
		cout << "Eu adoro programacao" << endl;
		
		// incremento da variavel contadora do while
		contador = contador + 1;
	}
	// a repeticao termina quando contador maior que n
	
	cout << "Ate a proxima" << endl;
	
	return 0;	
}
