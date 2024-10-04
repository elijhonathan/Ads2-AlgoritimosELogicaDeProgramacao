#include <iostream>
using namespace std;

int main()
{
    int entrada, idade_anos, resto_anos, idade_meses, dias;

    cout << "Digite sua idade em dias: ";
    cin >> entrada;

    idade_anos = entrada / 365;

    resto_anos = entrada % 365;

    idade_meses = resto_anos / 30;

    dias = resto_anos % 30;

    cout << idade_anos << " anos" << endl;
    cout << idade_meses << " meses" << endl;
    cout << dias << " dias";
}
