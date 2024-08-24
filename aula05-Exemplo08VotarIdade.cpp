#include <iostream>
using namespace std;

int main() {

	int idade;

	cout << "Entre com a idade: ";
	cin >> idade;
	
	if (idade >= 16) {
		
  		cout << "Voce pode votar se tiver titulo de eleitor" << endl;

  		if (idade >= 18 && idade <= 70) {
    		cout << "Se voce eh alfabetizado, seu voto eh obrigatorio" << endl;
    	}
  		else {
    		cout << "Seu voto eh facultativo" << endl;
    	}
	}
	else {
  		cout << "Voce ainda nao pode votar" << endl;
  	}
	
}
