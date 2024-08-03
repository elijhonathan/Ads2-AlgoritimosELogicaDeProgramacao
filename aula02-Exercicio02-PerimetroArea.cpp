#include <iostream>
using namespace std;

int main()
{
	float ladoquadrado, perimetro, area;
	
	cout << "Digite o lado do quadrado em m2: ";
	cin >> ladoquadrado;
	
	perimetro = ladoquadrado * 4;
	area = ladoquadrado * ladoquadrado;
	
	cout << "O perimetro do quadrado eh: " << perimetro << " m" << endl;
	cout << " A area eh: " << area << " m2" << endl;
	
	

	
	return 0;
}
