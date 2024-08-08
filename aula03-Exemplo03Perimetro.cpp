#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159

int main() {
	
	float raio, perimetro, area;
	
	cout << "Entre com o valor do raio:" << endl;
	cin >> raio;

	perimetro = 2 * PI * raio;
	area = PI * pow(raio, 2);

	cout << "Perimetro: " << perimetro << endl;
	cout << "Area: " << area << endl;
	
}
