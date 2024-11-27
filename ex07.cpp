#include <iostream>
using namespace std;

int main() 
{
    int quantidade;
    double temperatura, soma = 0;
    int validas = 0;


    cout << "Quantas temperaturas deseja digitar? ";
    cin >> quantidade;


    for (int i = 0; i < quantidade; i++) {
        cout << "Digite a temperatura entre 93 a 104 graus celcius #" << (i + 1) << ": ";
        cin >> temperatura;


        if (temperatura >= 93 && temperatura <= 104) {
            soma += temperatura;
            validas++;
        } else {
            cout << "Temperatura invalida!" << endl;
            i--; 
        }
    }

    if (validas > 0) 
    {
        double media = soma / validas;
        cout << "A media das temperaturas validas e: " << media << " graus Celsius." << endl;
    } 
    
    else 
    {
        cout << "Nenhuma temperatura valida foi informada." << endl;
    }

}
