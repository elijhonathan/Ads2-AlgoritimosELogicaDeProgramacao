#include <iostream>
using namespace std;

int main()
{
    int media;

    cout << "Digite a sua media: ";
    cin >> media;

    if (media >= 70)
    {
        cout << "Voce foi aprovado!";

    }

    else if(media < 70)
    {
        cout << "Voce foi reprovado!";
    }
}
