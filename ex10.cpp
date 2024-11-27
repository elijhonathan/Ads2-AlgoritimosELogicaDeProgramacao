#include <iostream>
using namespace std;

#define TAM 5

int main() 
{
    double alturas[TAM];
    double maiorAltura = 0;



    cout << "Digite as alturas de " << TAM << " : " ;
    for (int i = 0; i < TAM; i++) 
    {
        cin >> alturas[i];

        if (alturas[i] > maiorAltura) 
        {
            maiorAltura = alturas[i];
        }
    }


    cout << "A maior altura registrada foi: " << maiorAltura << " metros." << endl;


}
