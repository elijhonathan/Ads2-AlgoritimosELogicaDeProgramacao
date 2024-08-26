#include <iostream>
#include <cmath> 
using namespace std;

int main() {

    double A, B, C;
    

    cout << "Digite o valor do coeficiente A: ";
    cin >> A;
    cout << "Digite o valor do coeficiente B: ";
    cin >> B;
    cout << "Digite o valor do coeficiente C: ";
    cin >> C;

    if (A == 0) 
    {
        cout << "Os valores não correspondem a uma equação do segundo grau." << endl;
    }
    else 
    {

        double delta = B * B - 4 * A * C;


        if (delta < 0) 
        {
            cout << "A equação não possui raízes reais." << endl;
        }
          
        else if (delta == 0) 
        {

            double raiz = -B / (2 * A);
            cout << "A equação possui uma única raiz real: " << raiz << endl;
        }
        
        else 
        {

            double raiz1 = (-B + sqrt(delta)) / (2 * A);
            double raiz2 = (-B - sqrt(delta)) / (2 * A);
            cout << "A equação possui duas raízes reais: " << endl;
            cout << "Raiz 1: " << raiz1 << endl;
            cout << "Raiz 2: " << raiz2 << endl;
        }
    }

}
