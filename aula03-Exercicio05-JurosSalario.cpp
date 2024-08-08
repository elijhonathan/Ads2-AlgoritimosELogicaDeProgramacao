#include <iostream>
using namespace std;

int main()
{
    float salario, conta1, conta2;
    float sobra_salario, juros_conta1, juros_conta2;

    cout << "Digite seu salario: ";
    cin >> salario;

    cout << "Digite o valor da primeira conta: ";
    cin >> conta1;

    cout << "Digite o valor da segunda conta: ";
    cin >> conta2;

    juros_conta1 = conta1 + (conta1 * 0,20);

    juros_conta2 = conta2 + (conta2 * 0,20);

    sobra_salario = salario - juros_conta1 - juros_conta2;


    cout << "Restara R$ " << sobra_salario;

    




    
}
