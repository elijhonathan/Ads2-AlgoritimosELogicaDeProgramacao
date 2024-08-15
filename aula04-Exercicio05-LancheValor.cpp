#include <iostream>
using namespace std;

int main()
{
    float codigo, total, hotdog, coxinha, pastel, refrigerante;

    cout << "Digite o codigo do lanche: ";
    cin >> codigo;

    cout << "Digite a quantidade de lanches:  ";
    cin >> total;

    if (codigo == 100)
    {
        hotdog = total * 1.5;
        cout << "O valor de " << total << " cachorro quente eh R$ ";
        cout << hotdog;
    }

    else if (codigo == 101)
    {
        coxinha = total * 1.4;
        cout << "O valor de " << total << " coxinha eh R$ ";
        cout << coxinha;
    }

    else if (codigo == 102)
    {
        pastel = total * 1.3;
        cout << "O valor de " << total << " pastel eh R$ ";
        cout << pastel;
    }

    else if (codigo == 103)
    {
        refrigerante = total * 1.0;
        cout << "O valor de " << total << " refrigerante eh R$ ";
        cout << refrigerante;
    }

    else
    {
        cout << "Erro, tente novamente!";
    }

}
