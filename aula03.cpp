#include <iostream>
using namespace std;

int main ()
{

int entrada, resto_horas, horas, minutos, segundos;

entrada = 14200;

horas = entrada / 3600;

resto_horas = entrada % 3600;

minutos = resto_horas / 60;

segundos = resto_horas % 60;

cout << horas << " Horas"<< endl;
cout << minutos << " Minutos" << endl;
cout << segundos << " Segundos" << endl; 


}
