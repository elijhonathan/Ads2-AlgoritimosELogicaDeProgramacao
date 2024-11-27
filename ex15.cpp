#include <iostream>
using namespace std;

#define TAM 8

int main() 
{
    int tabuleiro[TAM][TAM];
    int totalPecas = 0;


    cout << "Informe 64 valores (0 para casa vazia, 1 para casa ocupada): " << endl;
    for (int i = 0; i < TAM; i++) 
    {
        for (int j = 0; j < TAM; j++) 
        {
            cin >> tabuleiro[i][j];


            if (tabuleiro[i][j] == 1) 
            {
                totalPecas++;
            }
        }
    }


    if (totalPecas == 32) 
    {
        cout << "O tabuleiro tem exatamente 32 pecas." << endl;
    } 
    
    else 
    {
        cout << "O tabuleiro nao tem 32 pecas." << endl;
    }

}
