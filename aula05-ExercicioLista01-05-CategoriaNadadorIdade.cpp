#include <iostream>
using namespace std;

int main ()
{

    int idade;

    cout << "Digite a idade do nadador: ";
    cin >> idade;

    if(idade < 5 && idade > 0)
    {
        cout << "Idade abaixo da minina aceitavel";
    }

    else if(idade >= 5 && idade <= 7)
    {
        cout << "O nadador esta na categoria Infantil A";
    }

    else if(idade > 7 && idade <= 10)
    {
        cout << "O nadador esta na categoria Infantil B";
    }

    else if(idade > 10 && idade <= 13)
    {
        cout << "O nadador esta na categoria Juvenil A";
    }

    else if(idade > 13 && idade <=17)
    {
        cout << "O nadador esta na categoria Juvenil B";
    }

    else if(idade > 17)
    {
        cout << "O nadador esta na categoria Adulto";
    }

    else
    {
        cout << "Idade digitada invalida";
    }
}
