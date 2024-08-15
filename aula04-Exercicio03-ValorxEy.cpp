#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, f, x, y;
    float denominador1, denominador2, denominador3, denominador4;

    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: ";
    cin >> b;

    cout << "Digite o valor de c: ";
    cin >> c;

    cout << "Digite o valor de d: ";
    cin >> d;

    cout << "Digite o valor de e: ";
    cin >> e;

    cout << "Digite o valor de f: ";
    cin >> f;

    denominador1 = c * e - b * f;
    denominador2 = a * e - b * d;
    denominador3 = a * f - c * d;
    denominador4 = a * e - b * d;


    if (denominador1 != 0 && denominador2 != 0 && denominador3 != 0 && denominador4 != 0)
    {

        x = denominador1 / denominador2;
        y = denominador3 / denominador4;


        cout << "O valor de X eh: " << x;
        cout << "O valor de Y eh: " << y;

    }

    else
    {
        cout << "Divisor eh igual a zero, erro!";
    }

    
}
