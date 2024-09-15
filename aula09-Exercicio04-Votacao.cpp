#include <iostream>;
using namespace std;

int main()
{
    int voto, candidato_a, candidato_b, nulo, total;

    voto = 0;
    candidato_a = 0;
    candidato_b = 0;
    nulo = 0;
    total = 0;

    while(voto != 3)
    {
        cout << "Digite: " << endl;
        cout << "1 para candidato A" << endl;
        cout << "2 para candidato B" << endl;
        cout << "3 para finalizar a votacao" << endl;
        cin >> voto;


        if(voto == 1)
        {
            candidato_a = candidato_a + 1;
        }
        else if(voto == 2)
        {
            candidato_b = candidato_b +1;
        }
        else if(voto != 3)
        {
            nulo = nulo + 1;
        }

        total = nulo + candidato_b + candidato_a;
    }

    cout << "Votos total: " << total << endl;
    cout << "Votos candidato A: " << candidato_a << endl;
    cout << "Votos candidatos B: " << candidato_b << endl;
    cout << "Votos nulos: " << nulo << endl;

    if(candidato_a > candidato_b)
    {
        cout << "Candidato A venceu!";
    }
    else if(candidato_b > candidato_a)
    {
        cout << "Candidato B venceu!";
    }
    else
    {
        cout << "Eleicao terminou em empate!";
    }

}
