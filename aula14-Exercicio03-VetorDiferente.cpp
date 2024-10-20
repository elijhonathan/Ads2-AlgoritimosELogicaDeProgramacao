#include <iostream>
using namespace std;

#define TAM 5

int main()
{

    int vetor[TAM];
    int i, cont;

    cont = 0;

    for (i=0 ; i < TAM ; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    for (i=0 ; i < TAM ; i++)
    {
        if ( vetor[i] != 0)
        {
            cout << vetor[i] << " ";
        }
    }

}
