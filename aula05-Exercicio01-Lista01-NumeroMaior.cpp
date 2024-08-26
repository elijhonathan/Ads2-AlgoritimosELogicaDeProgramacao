#include <iostream>
using namespace std;

int main()
{

int numero1, numero2, numero3, soma;

cout << "Digite tres numeros inteiros para vermos os dois maiores" << endl;

cout << "Digite o primeiro numero: ";
cin >> numero1;

cout << "Digite o segundo numero: ";
cin >> numero2;

cout << "Digite o terceiro numero: ";
cin >> numero3;


if(numero1 > numero2 && numero2 > numero3)
{
    soma = numero1 + numero2;
    cout << "Os maiores sao " << numero1 << " e " << numero2 << " sua soma eh " << soma;

}

else if(numero3 > numero2 && numero2 > numero1)
{
    soma = numero3 + numero2;
    cout << "Os maiores sao " << numero2 << " e " << numero3 << " sua soma eh " << soma;

}

else
{
    soma = numero1 + numero3;
    cout << "Os maiores sao " << numero1 << " e " << numero3 << " sua soma eh " << soma;

}

}
