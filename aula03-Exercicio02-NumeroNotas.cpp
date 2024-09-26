#include <iostream>
using namespace std;

int main()
{

    int entrada, cem, resto_cem, resto_cinquenta;
    int cinquenta, resto_dez, dez, resto_cinco, cinco, um;

    cout << "Digite um valor inteiro em reais: " << endl;
    cin >> entrada;

    cem = entrada / 100;
    resto_cem = entrada % 100;

    cinquenta = resto_cem / 50;
    resto_cinquenta = resto_cem % 50;

    dez = resto_cinquenta / 10;
    resto_dez = resto_cinquenta % 10;

    cinco = resto_dez / 5;
    resto_cinco = resto_dez % 5;

    um = resto_cinco / 1;

    cout << cem << " nota de cem" << endl;
    cout << cinquenta << " nota de cinquenta" << endl;
    cout << dez << " nota de dez" << endl;
    cout << cinco << " nota de cinco" << endl;
    cout << um << " nota de um" << endl;
}
