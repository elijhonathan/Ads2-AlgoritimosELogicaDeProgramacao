#include <iostream>
using namespace std;

int main() {

    double x, y;
    
    cout << "Digite a coordenada X: ";
    cin >> x;
    cout << "Digite a coordenada Y: ";
    cin >> y;
    
    if (x > 0 && y > 0) {
        cout << "O ponto está no primeiro quadrante." << endl;
    } else if (x < 0 && y > 0) {
        cout << "O ponto está no segundo quadrante." << endl;
    } else if (x < 0 && y < 0) {
        cout << "O ponto está no terceiro quadrante." << endl;
    } else if (x > 0 && y < 0) {
        cout << "O ponto está no quarto quadrante." << endl;
    } else if (x == 0 && y == 0) {
        cout << "O ponto está na origem." << endl;
    } else if (x == 0) {
        cout << "O ponto está sobre o eixo Y." << endl;
    } else if (y == 0) {
        cout << "O ponto está sobre o eixo X." << endl;
    }

}
