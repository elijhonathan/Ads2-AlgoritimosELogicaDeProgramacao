#include <iostream>
using namespace std;

int main()
{

    int n, i, maior, menor;

    cout << "Digite um um numero: ";
    cin >> n;

    maior = n;
    menor = n;
    i = 0;

    while(n != 0)
    {

        i++;

        if (n > maior)
        {
            maior = n;
        }

        if (n < menor)
        {
            menor = n;
        }

        cout << "Digite um numero ou zero para terminar: ";
        cin >> n;


    }

    cout << "O maior numero eh " << maior << endl;
    cout << "O menor numero eh " << menor << endl;
    cout <<"A quantidade de numeros eh " << i << endl;

}
