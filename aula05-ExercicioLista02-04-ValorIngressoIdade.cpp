#include <iostream>
using namespace std;

int main()
{

int idade;
float ingreso, ingreso_desconto;

ingreso = 10.0;

cout << "Digite a sua idade para calcular o valor do ingresso: ";
cin >> idade;

if(idade < 5 || idade > 70)
{
    cout << "ingressos gratis";
}

else if(idade >=5 && idade <= 12)
{
    ingreso_desconto = ingreso / 2;
    cout << "O valor do ingresso eh R$ " << ingreso_desconto;
}

else if(idade >= 13 && idade <= 17)
{
    ingreso_desconto = ingreso - (ingreso * 0.2);
    cout << "O valor do ingresso eh R$ " << ingreso_desconto;
}

else if(idade >= 18 && idade <= 70)
{
    cout << "O valor do ingresso eh R$ " << ingreso;
}









}
