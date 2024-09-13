#include <iostream>
using namespace std;

int main()
{
    int numero, somatorio, contador;
    
    cout << "Digite um numero para ver o fatorial ";
    cin >> numero;
    
    somatorio = 1;
    contador = 1;
    
    while(contador <= numero)
    {
        somatorio = somatorio * contador;
        
        contador = contador + 1;
        
        
    }
    
    cout << "O numero " << numero << " tem o fatorial " << somatorio;
}
