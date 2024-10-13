#include <iostream>
using namespace std;

int main()
{

    int n, i;
    float nota1, nota2, media, maior, menor;

    cout << "Digite o numero de alunos: ";
    cin >> n;

    maior = 0;
    menor = 10;

    for( i=0 ; i < n ; i++)
    {
        cout << "Digite a primeira nota: " << endl;
        cin >> nota1;

        cout << "Digite a segunda nota: " << endl;
        cin >> nota2;

        media = (nota1 + nota2) / 2;

        cout << "Media do aluno " << i + 1 << " eh " << media << endl;


        if ( maior < media)
        {
            maior = media;
        }

        if ( menor > media)
        {
            menor = media;
        }

    }

    cout << "A maior media eh " << maior << endl;
    cout << "A menor media eh " << menor << endl;

    
}
