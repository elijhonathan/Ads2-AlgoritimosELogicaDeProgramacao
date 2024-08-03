#include <iostream>
using namespace std;

int main()
{
	
	float ladoa, ladob, area, potencia;
	
	cout << "Digite a primeira medida: ";
	cin >> ladoa;
	
	cout << "Digite a segunda medida: ";
	cin >> ladob;
	
	area = ladoa * ladob;
	
	potencia = area * 18;
	
	cout << "Para a area de " << area << " m2 eh necessario " << potencia << " watts"; 
	
	
	
	
	return 0;
}
