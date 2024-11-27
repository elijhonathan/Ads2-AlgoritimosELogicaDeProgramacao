#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;


    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;


    if (num1 > num2)
    {
        cout << "O primeiro numero eh maior";
    } 
    
    else if (num2 > num1)
    {
        cout << "O segundo numero  eh maior";
    } 
    
    else {
        cout << "Os dois numeros sao iguais.";
    }

}