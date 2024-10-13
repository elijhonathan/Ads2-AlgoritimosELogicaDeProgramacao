#include <iostream>
using namespace std;

int main()
{
    int codigo, quantidade;
    float total;

    cout << "Digite o codigo do produto: "<< endl;
    cin >> codigo;

    if(codigo > 40 || codigo < 1)
    {
        cout << "Codigo digitado eh invalido!";
    }

    else
    {
        cout << "Digite a quantidade: " << endl;
        cin >> quantidade;

        if(codigo >= 1 && codigo <= 10)
        {
            total = 10.0 * quantidade;
            cout << "O total a pagar eh R$ " << total;
        }

        else if(codigo >= 11 && codigo <= 20)
        {
            total = 15.0 * quantidade;
            cout << "O total a pagar eh R$ " << total;
        }

        else if(codigo >= 21 && codigo <= 30)
        {
            total = 20.0 * quantidade;
            cout << "O total a pagar eh R$ " << total;
        }

        else if(codigo >= 31 && codigo <=40)
        {
            total = 30.0 * quantidade;
            cout << "O total a pagar eh R$ " << total;
        }
    }
}
