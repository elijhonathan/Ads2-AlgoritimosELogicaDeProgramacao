#include <iostream>
using namespace std;

int main()
{
    int numero_alunos, nota, media, somatorio, contador;
    
    cout << "Digite o numero de alunos para registrar notas: ";
    cin >> numero_alunos;
    
    contador = 1;
    somatorio = 0;
    
    
    while(contador <= numero_alunos )
    {
        cout << "Digite a nota do aluno " << contador << " : ";
        cin >> nota;
        
        somatorio = somatorio + nota;
        
        contador++;
        
        
    }
    
    media = somatorio / numero_alunos;
    
    cout << "A media da classe eh: " << media;

}
