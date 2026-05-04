#include <iostream>
#include <array>
using namespace std;

int main()
{
    int t = 0, a = 0, e = 0;
    int tempo[4] = {0}, espaco[4]={0}, velocidade[3] ={0};
    cout << "\n Calculo de aceleração e tempo \n";
    for (int i = 0; i < 4; i++)
    {
        cout << "\n Insira o espaco: ";
        cin >> e;
        espaco[i] = e;
        cout << "  Insira o tempo: ";
        cin >> e;
        tempo[i] = e;
    }
    for (int i = 0; i < 3; i++)
    {
            velocidade[i] = (espaco[i+1] - espaco[i])/(tempo[i+1] - tempo[i]);
            cout << "\n" << espaco[i] <<" "<< espaco[i+1] << "=" << velocidade[i] << "M/s"; 
    }
    a = (velocidade[1] - velocidade[0])/( tempo[1] - tempo[0]);

    cout << "\n Aceleracao: " << a << "m/s^2";
}