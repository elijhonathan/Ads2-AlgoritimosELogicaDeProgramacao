#include <iostream>
using namespace std;

int main()
{
    int frequencia, media;

    cout << "Digite a frequencia: ";
    cin >> frequencia;

    if(frequencia < 75)
    {
        cout << "Reprovado por falta";
    }
    else
    {
        cout << "Digite sua media: ";
        cin >> media;

        if(media >= 70)
        {
            cout << "Aprovado";
        }

        else if(media < 40)
        {
            cout << "Reprovado";
        }

        else if(media > 40 && media < 70)
        {
            cout << "Exame final";
        }
    }
}
