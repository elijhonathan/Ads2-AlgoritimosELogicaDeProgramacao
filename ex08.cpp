#include <iostream>
using namespace std;

#define TAM 5 

int main() 
{
    int vetor[TAM];


    cout << "Digite 5 numeros: ";
    for (int i = 0; i < TAM; i++) 
    { 
        cin >> vetor[i];
    }


    for (int i = 0; i < TAM; i++) 
    { 
        if (vetor[i] % 2 != 0) 
        { 
            vetor[i] += 1;
        }
    }


    cout << "Vetor transformado: ";
    for (int i = 0; i < TAM; i++) 
    {
        cout << vetor[i] << " ";
    }
    cout << endl;

}

