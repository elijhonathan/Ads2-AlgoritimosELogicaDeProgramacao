#include <iostream>
using namespace std;

int main()
{

    float salario, liquido;
    int quantidade, contador;

    cout <<"Digite a quantidade de funcionarios: " << endl;
    cin >> quantidade;

    contador = 1;

    if(quantidade < 1)
    {
        cout <<"Programa encerrado!";
    }

    else
    {
        while(contador <= quantidade)
        {
            cout <<"Digite o salario do funcionario " << contador << " R$ " << endl;
            cin >> salario;

            liquido = salario - (salario * 0.09);

            cout << "O salario do funcionario " << contador << " eh R$ " << liquido << endl;

            contador++;

        }
    }
}
