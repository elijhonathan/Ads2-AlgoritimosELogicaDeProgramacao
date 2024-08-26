#include <iostream>
using namespace std;

int main()
{
    float saldo_medio, saldo_calculado;

cout << "Digite seu saldo medio: ";
cin >> saldo_medio;

if(saldo_medio <= 200)
{
    cout << "Nenhum credito ";
}

else
{
    if(saldo_medio > 200 && saldo_medio < 401)
    {
        saldo_calculado = saldo_medio * 0.2;
        cout << "O seu credito eh R$ " << saldo_calculado;
    }

    else if(saldo_medio > 400 && saldo_medio < 601)
    {
        saldo_calculado = saldo_medio * 0.3;
        cout << "O seu credito eh R$ " << saldo_calculado;
    }

    else if(saldo_medio > 600)
    {
        saldo_calculado = saldo_medio * 0.4;
        cout << "O seu credito eh R$ " << saldo_calculado;
    }
}



}
