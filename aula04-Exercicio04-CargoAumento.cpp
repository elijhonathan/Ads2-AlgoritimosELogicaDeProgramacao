#include <iostream>
using namespace std;

int main()
{
    float codigo, salario, gerente, engenheiro, tecnico;

    cout << "Digite o codigo do seu cargo: ";
    cin >> codigo;

    cout << "Digite o seu salario: ";
    cin >> salario;

    if (codigo == 100 )
    {
        gerente = salario + (salario * 0,10);
        cout << "O gerente tem um aumento de 10%, seu novo salario sera: R$ ";
        cout << gerente;

    }

    else if (codigo == 101)
    {
        engenheiro = salario + (salario * 0,20);
        cout << "O engenheiro tem um aumento de 20%, seu novo salario sera: R$ ";
        cout << engenheiro;

    }

    else if (codigo == 102)
    {
        tecnico = salario + (salario * 0,30);
        cout << "O tecnico tem um aumento de 30%, seu novo salario sera: R$ ";
        cout << tecnico;

    }

    else
    {
        cout << "Erro, tente novamente!";
    }
}
