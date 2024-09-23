#include <iostream>
using namespace std;

/* Lanchonete com menu iterativo

Fa�a um programa que permita realizar pedidos em uma lanchonete, 
enquanto n�o for digitada a opcao para finalizar. Quando o usu�rio
escolher a op~]ao para  finalizar, o programa dever� mostrar o valor total 
a ser pago.

As opcoes s�o:
1 - Cachorro quente: R$ 1,5
2 - Coxinha: R$ 1,4
3 - Pastel: R$ 1,3
4 - Refrigerante: R$ 1,0
5 - Finalizar

Caso a opcao escolhida seja um item da lanchonete, o programa dever�
ler a quantidade deste item. Caso seja escolhida uma op��o diferente 
das op��es dispon�veis, o programa dever� exibir a mensagem
"Opcao invalida".
*/

int main() {
	
	int op, quantidade;
	float total;
	
	total = 0;
	op = 0;
	
	while (op != 5) {
	
		// exibe o menu
		cout << "1 - Cachorro quente: R$ 1,5" << endl;
		cout << "2 - Coxinha: R$ 1,4" << endl;
		cout << "3 - Pastel: R$ 1,3" << endl;
		cout << "4 - Refrigerante: R$ 1,0" << endl;
		cout << "5 - Finalizar" << endl;

		cout << endl << "Entre com a opcao: ";
		cin >> op;
		
		if (op >= 1 && op <= 4) {
			cout << "Entre com a quantidade: ";
			cin >> quantidade;
			cout << endl;
		}
	
		if (op == 1) {
			total = total + 1.5 * quantidade;
		}
			
		else if (op == 2) {
			total = total + 1.4 * quantidade;
		}
			
		else if (op == 3) {
			total = total + 1.3 * quantidade;
		}
			
		else if (op == 4) {
			total = total + 1.0 * quantidade;
		}
			
		else if (op == 5) {
			cout << "Total: " << total << endl;
		}
		else {
			cout << "Opcao invalida" << endl << endl;
		}
	}
	
	return 0;
}
