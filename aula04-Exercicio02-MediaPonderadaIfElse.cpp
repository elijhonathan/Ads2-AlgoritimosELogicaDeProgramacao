#include <iostream>
using namespace std;

int main()
{
    int media1, media2, media3, ponderada;

    cout << "Digite a primeira nota: ";
    cin >> media1;

    cout << "Digite a segunda nota: ";
    cin >> media2;

    cout << "Digite a terceira nota: ";
    cin >> media3;

    ponderada = ((media1 * 2) + (media2 * 3) + (media3 * 5)) / (2 + 3 + 5);

    if (ponderada >= 70)
    {
        cout << "Sua media foi " << ponderada << " voce foi aprovado!";
    }

    else if(ponderada < 70)
    {
        cout << "Sua media foi " << ponderada << " voce foi reprovado!";
    }

}
