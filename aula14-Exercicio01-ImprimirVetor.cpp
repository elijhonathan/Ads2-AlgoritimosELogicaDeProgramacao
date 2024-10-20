#include <iostream>
using namespace std;

#define TAM 4

int main()
{

    int vetor[TAM];
    int i;

    for (i = 0 ; i < TAM ; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    for (i = 0 ; i < TAM ; i++)
    {
        if(vetor[i] == 0)
        {
            vetor[i] = 1;
        }
    }

    for (i=0 ; i < TAM ; i++ )
    {
        cout << vetor[i] << " ";
    }

}
