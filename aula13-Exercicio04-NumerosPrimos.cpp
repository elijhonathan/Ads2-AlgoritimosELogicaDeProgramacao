#include <iostream>
using namespace std;

int main()
{

    int numeroDePrimos, contador, i, primeiroNumeroPrimo;

    contador = 0;
    primeiroNumeroPrimo = 2;

    cout <<"Digite quantos numeros primos voce quer exibir: " << endl;
    cin >> numeroDePrimos;

    while (contador < numeroDePrimos)
    {
        int divisor;
        divisor = 0;

        for (i = 2; i * i <= primeiroNumeroPrimo; i++)
        {
            if (primeiroNumeroPrimo % i == 0)
            {
                divisor++;
            }
        }

        if (divisor == 0)
        {
            cout << primeiroNumeroPrimo << " ";
            contador++;
        }

        primeiroNumeroPrimo++;

    } 
}
