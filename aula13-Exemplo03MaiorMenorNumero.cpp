#include <iostream>
using namespace std;

int main() {
	
	int i, n;
	float num, maior, menor;
	
	cout << "Entre com o tamanho da sequencia: ";
	cin >> n;
	cout << endl;
	
	if (n > 0) {
	
		cout << "Entre com um numero: ";
		cin >> num;
		
		maior = num;
		menor = num;
		
		i = 1;
		while (i < n) {
			cout << "Entre com um numero: ";
			cin >> num;
			
			if (num > maior) {
				maior = num;
			}
			
			if (num < menor) {
				menor = num;
			}
			
			// nao esquecer de incrementar i
			i = i + 1;
		}
		
		cout << "Maior: " << maior << endl;
		cout << "Menor: " << menor << endl;
	}
		
}
