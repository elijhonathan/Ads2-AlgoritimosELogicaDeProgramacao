#include <iostream>
using namespace std;

int main()
{
    int numero_alunos, contador;
    float nota1, nota2, media;

    cout << "Digite o numero de alunos para dar entrada nas notas: ";
    cin >> numero_alunos;

    contador = 1;

    while(contador <= numero_alunos)
    {
        cout << "Digite a primeira nota do aluno " << contador << endl;
        cin >> nota1;

        cout << "Digite a segunda nota do aluno " << contador << endl;
        cin >> nota2;

        media = (nota1 + nota2) / 2;

        if(media >= 7.0)
        {
            cout << "Aluno " << contador << " foi aprovado." << endl;
        }

        else if(media >= 4.0)
        {
            cout << "Aluno " << contador << " esta de exame final." << endl;
        }

        else
        {
            cout << "Aluno " << contador << " foi reprovado." << endl;
        }

        contador++;



    }


}
