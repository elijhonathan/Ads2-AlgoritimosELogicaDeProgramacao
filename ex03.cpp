#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    if (num1 < num2)
    {
        cout << "A ordem crescente e: " << num1 << " " << num2 << endl;
    }
    
    else
    {
        cout << "A ordem crescente e: " << num2 << " " << num1 << endl;
    }


}