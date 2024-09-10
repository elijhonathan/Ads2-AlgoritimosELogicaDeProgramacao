#include <iostream>
using namespace std;

int main()
{
    int numero_alunos, contador;
    float nota1, nota2, media;
    
    cout << "Digite o numero de alunos para registrar as notas: ";
    cin >> numero_alunos;
    
    contador = 1;
    
    while(contador <= numero_alunos)
    {
        
        cout << "Digite a nota do primeiro bimestre: ";
        cin >> nota1;
        
        cout << "Digite a nota do segundo bimestre: ";
        cin >> nota2;  
        
        
        media = (nota1 + nota2) / 2;
        
        cout << "O aluno " << contador << " teve media semestral " << media << endl;
        
        contador++;
        
        
        
    }


}
