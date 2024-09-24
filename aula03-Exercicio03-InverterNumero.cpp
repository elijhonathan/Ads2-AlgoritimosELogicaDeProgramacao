#include <iostream>
using namespace std;

int main()
{

int entrada, numero1, numero2, numero3;
int resto_um, resto_dois;

cout << "Digite um valor numerico com tres unidades: " << endl;
cin >> entrada;

numero1 = entrada / 100;
resto_um = entrada % 100;

numero2 = resto_um / 10;
resto_dois = resto_um % 10;

numero3 = resto_dois;

cout << numero3 << numero2 << numero1;
  
}
