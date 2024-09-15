#include <iostream>
using namespace std;

int main()
{
    float total, hotdog, coxinha, pastel, refrigerante;
    int codigo;

    cout << "Digite o codigo do lanche: ";
    cin >> codigo;

    cout << "Digite a quantidade de lanches:  ";
    cin >> total;

    if (codigo == 100)
    {
        hotdog = total * 5.0;
        cout << "O valor de " << total << " cachorro quente eh R$ ";
        cout << hotdog;
    }

    else if (codigo == 101)
    {
        coxinha = total * 6.0;
        cout << "O valor de " << total << " coxinha eh R$ ";
        cout << coxinha;
    }

    else if (codigo == 102)
    {
        pastel = total * 7.0;
        cout << "O valor de " << total << " pastel eh R$ ";
        cout << pastel;
    }

    else if (codigo == 103)
    {
        refrigerante = total * 3.0;
        cout << "O valor de " << total << " refrigerante eh R$ ";
        cout << refrigerante;
    }

    else
    {
        cout << "Erro, tente novamente!";
    }
}
