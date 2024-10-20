#include <iostream>
using namespace std;

#define N 5

int main() {
	
	int vetor[N];
	int i;
	
	cout << "Informe " << N << " valores: " << endl;
	for (i=0; i<N; i++) {
		cin >> vetor[i];
	}
	cout << endl;
	
	cout << "Vetor: " << endl;
	
	for (i=N-1; i>=0; i--) {
		cout << vetor[i] << " ";
	}
	cout << endl;
	
	return 0;	
}
