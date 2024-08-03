#include <iostream>
using namespace std;

int main()
{
	
	float peso, altura, imc;
	
	cout << "Digite o seu peso em kilos: ";
	cin >> peso;
	
	cout << "Digite a sua altura em metros: ";
	cin >> altura;
	
	imc = peso / (altura * altura);
	
	cout << "O seu imc eh: " << imc;
	
	
	
	
	return 0;
}
