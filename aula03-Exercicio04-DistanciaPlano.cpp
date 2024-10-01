#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, y1, x2, y2, distancia;
    double  raiz;

    cout << "Digite o valor de x1: ";
    cin >> x1;

    cout << "Digite o valor de y1: ";
    cin >> y1;

    cout << "Digite o valor de x2: ";
    cin >> x2;

    cout << "Digite o valor de y2: ";
    cin >> y2;

    distancia = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

    raiz = sqrt(distancia); 

    cout << "A distancia eh: " << raiz;

}
