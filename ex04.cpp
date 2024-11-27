#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a, b, c;

    cout << "Digite o primeiro lado: ";
    cin >> a;
    cout << "Digite o segundo lado: ";
    cin >> b;
    cout << "Digite o terceiro lado: ";
    cin >> c;


    if (a > b) {
        double temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        double temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        double temp = b;
        b = c;
        c = temp;
    }

 
    if (pow(c, 2) == pow(a, 2) + pow(b, 2)) 
    {
        cout << "O triângulo eh retangulo." << endl;
    } 
    
    else
    {
        cout << "O triângulo nao eh retangulo." << endl;
    }


}