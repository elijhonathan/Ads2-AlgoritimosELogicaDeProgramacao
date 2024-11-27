#include <iostream>
using namespace std;

int main() 
{
    double valorVenda, valorComDesconto, valorParcelado;

    cout << "Digite o valor total da venda em R$: ";
    cin >> valorVenda;

   
    valorComDesconto = valorVenda - (valorVenda * 0.10);

 
    valorParcelado = valorVenda / 3;

 
    cout << "Valor total com 10% de desconto se pago avista): R$ " << valorComDesconto << endl;
    cout << "Valor de cada parcela (3x sem juros): R$ " << valorParcelado << endl;


}