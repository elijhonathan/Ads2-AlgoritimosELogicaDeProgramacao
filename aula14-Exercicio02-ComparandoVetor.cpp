#include <iostream>
using namespace std;

#define TAM 5

int main()
{

    int vetor[TAM];
    int i, x, cont;

    x = 22;
    cont = 0;

    for (i=0 ; i < TAM ; i++)
    {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    for (i=0 ; i < TAM ; i++)
    {
        if(vetor[i] == x)
        {
            cont++;
        }
    }

    for (i=0 ; i < TAM ; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << endl;
    cout << "Foram mostrados " << cont << " numeros " << x;
}
