#include <iostream>
using namespace std;

int main()
{
	float temperaturaf, celcius;
	
	cout << "Digite uma temperatura em Fahrenheit (F) para converter para Celsius (C): ";
	cin >> temperaturaf;
	
	celcius = (temperaturaf - 32) / 1.8;
	
	cout << "A temperatura " << temperaturaf << " F fica  " << celcius << " C";
	
	
	
	return 0;
	
}
