#include <iostream>
using namespace std;

#define TAM 5 

int main() 
{
    int vetor[TAM];
    int somaPares = 0;


    cout << "Digite " << TAM << " numeros: ";
    for (int i = 0; i < TAM; i++) 
    {
        cin >> vetor[i];
    }


    for (int i = 0; i < TAM; i++) 
    {
        if (vetor[i] % 2 == 0) 
        { 
            somaPares += vetor[i];
        }
    }


    cout << "A soma dos numeros pares e: " << somaPares << endl;

}
