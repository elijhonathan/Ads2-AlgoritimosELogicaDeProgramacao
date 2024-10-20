#include <iostream>
using namespace std;

int main() {
	
	int vetor[5];
	
	// atribuindo valores
	vetor[0] = 1;
	vetor[1] = 2;
	vetor[2] = 3;
	vetor[3] = 4;
	vetor[4] = 5;
	
	// imprimindo posicoes
	cout << "vetor[0]: " << vetor[0] << endl;
	cout << "vetor[1]: " << vetor[1] << endl;
	cout << "vetor[2]: " << vetor[2] << endl;
	cout << "vetor[3]: " << vetor[3] << endl;
	cout << "vetor[4]: " << vetor[4] << endl;
	
	cout << endl;
	
	// acessando posicoes usando variavel indexadora
	int i;
	i = 2;
	vetor[i] = 10;
	cout << "vetor[" << i << "]: " << vetor[i] << endl;
	
	return 0;
}
