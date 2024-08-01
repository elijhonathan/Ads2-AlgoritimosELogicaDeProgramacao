#include <iostream>
using namespace std;

int main()
{
	
	float nota1, nota2, nota3, media;
	float peso1 = 2;
	float peso2 = 3;
	float peso3 = 5;
	
	cout << "Digite a primeira nota: ";
	cin >> nota1;
	
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	
	cout << "Digite a terceira nota: ";
	cin >> nota3;
	
	media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
	
	cout << "Sua media foi: " << media;
	
	
	
	return 0;
}
