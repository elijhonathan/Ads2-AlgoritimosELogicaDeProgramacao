#include <iostream>
using namespace std;

int main() 
{
    double limite, numero, soma = 0;

 
    cout << "Digite o limite da soma: ";
    cin >> limite;


    while (soma < limite) 
    {
        cout << "Digite um numero para adicionar: ";
        cin >> numero;

        soma += numero;

        cout << "Soma atual: " << soma << endl;

    }

}