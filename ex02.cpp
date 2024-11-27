#include <iostream>
using namespace std;

int main() 
{
    int numero;


    cout << "Digite um numero inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) 
    {
        cout << "O numero e par " ;
    }

    else
    {
        cout << "O numero e impar " ;
    }


    if (numero > 0) 
    {
        cout << " e positivo." << endl;
    } 

    else if (numero < 0) 
    {
        cout << " e negativo." << endl;
    } 

    else 
    {
        cout << "O numero e zero." << endl;
    }

}
