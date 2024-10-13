#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float salario, taxa, salario_liq, maior, menor;

    taxa = 0.09;

cout << "Digite o numero de funcionarios: ";
cin >> n;

cout << "Digite o salario R$ ";
cin >> salario;

salario_liq = salario - (salario * taxa);

cout << "Salario liquido eh R$ " << salario_liq << endl;

maior = salario;
menor = salario;

for (i = 1 ; i < n ; i++)
{
    cout << "Digite o salario R$ ";
    cin >> salario;

    salario_liq = salario - (salario * taxa);

    cout << "Salario liquido eh R$ " << salario_liq << endl;

    if (maior < salario)
    {
        maior = salario;
    }

    if (menor > salario)
    {
        menor = salario;
    }

}

cout << "O maior salario eh R$ " << maior << endl;
cout << "O menor salario eh R$ " << menor << endl;

    
}
