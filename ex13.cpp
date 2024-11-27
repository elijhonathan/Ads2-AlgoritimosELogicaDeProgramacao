#include <iostream>
using namespace std;

#define ROWS 2 
#define COLS 3 

int main() 
{
    double notas[ROWS][COLS];
    double maiorNota = -1;
    int posLinha = -1, posColuna = -1;


    cout << "Digite as notas da sala: " << endl;
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            cin >> notas[i][j];


            if (notas[i][j] > maiorNota) 
            {
                maiorNota = notas[i][j];
                posLinha = i;
                posColuna = j;
            }
        }
    }


    cout << "A maior nota e " << maiorNota << ", localizada na fileira " 
         << posColuna + 1 << ", carteira " << posLinha + 1 << "." << endl;


}

