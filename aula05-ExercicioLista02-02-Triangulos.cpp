#include <iostream>
using namespace std;

int main() {

    double a, b, c;
    

    cout << "Digite o comprimento do lado A: ";
    cin >> a;
    cout << "Digite o comprimento do lado B: ";
    cin >> b;
    cout << "Digite o comprimento do lado C: ";
    cin >> c;
    

    if ((a < b + c) && (b < a + c) && (c < a + b)) {

        if (a == b && b == c) {
            cout << "Os valores formam um triângulo equilátero." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Os valores formam um triângulo isósceles." << endl;
        } else {
            cout << "Os valores formam um triângulo escaleno." << endl;
        }
    } else {

        cout << "Os valores não formam um triângulo." << endl;
    }

}
