#include <iostream>
using namespace std;

int main()
{

    int numeros, pares, soma, contador;

    cout << "Digite o numero de entradas: ";
    cin >> numeros;

    contador = 1;
    soma = 0;

    while(contador <= numeros)
    {
        cout << "Digite o numero: ";
        cin >> pares;

        if(pares % 2 == 0)
        {
            soma = soma + pares;

        }

        contador++;

    }

    cout << "A soma dos numeros pares eh: " << soma;


}
