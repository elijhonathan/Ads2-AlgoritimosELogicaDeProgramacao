#include <iostream>
using namespace std;

int main()
{

    int entradas, numeros, contador, pares, impares;

    cout << "Digite o numero de entradas: ";
    cin >> entradas;

    contador = 1;
    numeros = 0;
    pares = 0;
    impares = 0;

    while(contador <= entradas)
    {

        cout << "Digite o numero: ";
        cin >> numeros;

        if(numeros % 2 == 0)
        {
            pares = pares + numeros;
        }

        else if(numeros % 2 != 0)
        {
            impares = impares + numeros;

        }

        contador++;

    }


    cout << "Soma dos numeros pares eh: " << pares << endl;
    cout << "Soma dos numeros impares eh: " << impares;

}
