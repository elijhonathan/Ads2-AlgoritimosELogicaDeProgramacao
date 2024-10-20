#include <iostream>
using namespace std;

#define N 5

/*
Fa�a um programa que informa o numero de elementos iguais a zero 
contidos em um vetor.
*/

int main() {

    int vetor[N];
    int i, cont;
    
    cout << "Informe " << N << " valores: " << endl;
	
	for (i=0; i<N; i++) {
		cin >> vetor[i];
	}
	cout << endl;
	
	
	cont = 0;
	for (i=0; i<N; i++) {	
	
		if (vetor[i] == 0) {
			cont++;
		}	
	}

    cout << "Numero de elementos iguais a zero: " << cont << endl;
    
    return 0;
}
