#include <iostream>
using namespace std;

#define TAM 5

int main() {
    int a[TAM], b[TAM], c[TAM];


    cout << "Digite " << TAM << " valores para o vetor A: ";
    for (int i = 0; i < TAM; i++) {
        cin >> a[i];
    }


    cout << "Digite " << TAM << " valores para o vetor B: ";
    for (int i = 0; i < TAM; i++) {
        cin >> b[i];
    }


    for (int i = 0; i < TAM; i++) {
        c[i] = a[i] + b[i];
    }


    cout << "Vetor C : ";
    for (int i = 0; i < TAM; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

}
