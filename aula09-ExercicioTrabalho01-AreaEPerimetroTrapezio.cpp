#include <iostream>
using namespace std;

int main()
{
    float altura, lado1, lado2, base_maior, base_menor, area, perimetro;

    cout << "Digite a altura do trapezio: ";
    cin >> altura;

    cout << "Digite a lado 1 do trapezio: ";
    cin >> lado1;

    cout << "Digite a lado 2 do trapezio: ";
    cin >> lado2;

    cout << "Digite a base maior do trapezio: ";
    cin >> base_maior;

    cout << "Digite a base menor do trapezio: ";
    cin >> base_menor;

    area = ((base_maior + base_menor) * altura) / 2;

    perimetro = base_maior + base_menor + lado1 + lado2;

    cout << "A area do trapezio eh: " << area << endl;

    cout << "O perimetro do trapezio eh: " << perimetro;

}
