#include <iostream>
using namespace std;

#define N 5

int main() {
	
	int vetor[N];
	int i;
	
	// preenchendo uma posicao especifica com valor informado 
	// pelo usuario
	i = 0;
	cout << "Entre com um numero inteiro: ";
	cin >> vetor[i];
	cout << "vetor[" << i << "]: " << vetor[i] << endl << endl;
	
	
	// leitura do vetor
	cout << "Informe " << N << " valores: " << endl;
	
	for (i=0; i<N; i++) {
		cin >> vetor[i];
	}
	cout << endl;
	
	
	// imprimindo o vetor
	cout << "Vetor: " << endl;
	
	for (i=0; i<N; i++) {
		cout << vetor[i] << " ";
	}
	cout << endl;
	
	return 0;
}
