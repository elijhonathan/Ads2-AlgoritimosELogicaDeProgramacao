#include <iostream>
using namespace std;

#define N 5

/*
Fa�a um programa para verificar se um numero est� contido no vetor,
imprimindo 1 (um) caso o numero seja encontrado, e 0 (zero) caso
contrario.

*/

void leitura_vetor(int vetor[N]) {
	int i;
	
	cout << "Informe " << N << " valores: " << endl;
	for (i=0; i<N; i++) {
		cin >> vetor[i];
	}
	cout << endl;
	
}

void imprime_vetor(int vetor[N]) {
	int i;
	
	cout << "Vetor: " << endl;
	for (i=0; i<N; i++) {
		cout << vetor[i] << " ";
	}
	cout << endl;
	
}

int pesquisa(int vetor[N], int x, int &pos) {
    int i;
    
    pos = -1;
    
    for (i=0; i<N; i++) {	
    	if (vetor[i] == x) {
    		pos = i;
    		return 1;
		}	
	}
	return 0;
}

int main() {

    int vetor[N];
    int i, x, res, pos;
    
    cout << "Informe " << N << " valores: " << endl;
	for (i=0; i<N; i++) {
		cin >> vetor[i];
	}
	cout << endl;
    
    
    cout << "Entre com um numero inteiro: ";
    cin >> x;
    
    pos = -1;
    for (i=0; i<N; i++) {	
    	if (vetor[i] == x) {
    		pos = i;
		}	
	}
    
    if (pos >= 0) {
    	cout << "O numero esta contido no vetor na posicao: " << pos << endl;
	}
	else {
		cout << "O numero NAO esta contido no vetor" << endl;
	}

	return 0;
}
