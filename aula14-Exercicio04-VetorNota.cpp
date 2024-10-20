#include <iostream>
using namespace std;

#define TAM 5

int main()
{

    int vetor[TAM];
    int i;

    for (i=0 ; i < TAM ; i++)
    {
        cout << "Digite a nota do aluno " << i + 1 << " : ";
        cin >> vetor[i];
    }

    for (i=0 ; i < TAM ; i++)
    {
        if(vetor[i] >= 7)
        {
            cout << "Aluno " << i + 1 << " foi aprovado" << endl; 
        }
        else if (vetor [i] <= 4)
        {
            cout << "Aluno " << i + 1 << " foi reprovado" << endl;
        }
        else
        {
            cout << "Aluno " << i + 1 << " esta de exame" << endl;
        }
    }

}
