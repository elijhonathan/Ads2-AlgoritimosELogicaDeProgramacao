#include <iostream>
using namespace std;

int main()
{

float imc, peso, altura;

cout << "Digite a sua altura em Metros: ";
cin >> altura;

cout << "Digite a sua peso em kg: ";
cin >> peso;

imc = peso / (altura * altura);


if(imc < 18.5)
{
    cout << "O seu IMC eh: " << imc << endl;
    cout << "Voce esta abaixo do peso";
}

else if(imc >= 18.5 && imc < 25)
{
    cout << "O seu IMC eh: " << imc << endl;
    cout << "Voce esta com o peso ideal";
}

else if(imc >= 25 && imc < 30)
{
    cout << "O seu IMC eh: " << imc << endl;
    cout << "Voce esta com sobrepeso";
}

else if(imc > 30)
{
    cout << "O seu IMC eh: " << imc << endl;
    cout << "Voce esta com obesidade";
}

else
{
    cout << "Voce digitou um valor invalido";
}
}
