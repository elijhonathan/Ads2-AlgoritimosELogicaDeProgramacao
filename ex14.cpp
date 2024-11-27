#include <iostream>
using namespace std;

#define TAM 4

int main() 
{
    int imagem[TAM][TAM];
    int pixelsPretos = 0, pixelsBrancos = 0;


    cout << "Informe a imagem binaria 4x4 (0 para preto e 1 para branco): " << endl;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cin >> imagem[i][j];


            if (imagem[i][j] == 0) {
                pixelsPretos++;
            } else if (imagem[i][j] == 1) {
                pixelsBrancos++;
            }
        }
    }


    cout << "Quantidade de pixels pretos: " << pixelsPretos << endl;
    cout << "Quantidade de pixels brancos: " << pixelsBrancos << endl;


    if (pixelsBrancos > pixelsPretos) 
    {
        cout << "A imagem eh clara" << endl;
    } 

    else 
    {
        cout << "A imagem eh escura" << endl;
    }


}
