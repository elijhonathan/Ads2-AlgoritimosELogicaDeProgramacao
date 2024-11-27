#include <iostream>
using namespace std;

#define TAM 3

int main() 
{
    int matriz[TAM][TAM];


    cout << "Digite os elementos da matriz 3x3 : " << endl;
    for (int i = 0; i < TAM; i++) 
    {
        for (int j = 0; j < TAM; j++) 
        {
            cin >> matriz[i][j];
        }
    }

    cout << "Diagonal principal: ";
    for (int i = 0; i < TAM; i++) 
    {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

}
