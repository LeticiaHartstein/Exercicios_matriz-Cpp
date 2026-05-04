#include <iostream>
#include <array>
using namespace std;

int main()
{
    //t = tempo, a = aceleração, e = espaço
    int t = 0, a = 0, e = 0;
    //armazenar diferentes tempos, espaço e as diferentes velocidades entre dois pontos
    int tempo[4] = {0}, espaco[4]={0}, velocidade[3] ={0};

    
    cout << "\n Calculo de aceleração e tempo \n";
    
    //loop para adicionar informações aos arrays espaco  e velocidade
    for (int i = 0; i < 4; i++)
    {
        cout << "\n Insira o espaco: ";
        cin >> e;
        espaco[i] = e;
        cout << "  Insira o tempo: ";
        cin >> e;
        tempo[i] = e;
    }
    //calculando a velocidade entre dois pontos
    for (int i = 0; i < 3; i++)
    {
            velocidade[i] = (espaco[i+1] - espaco[i])/(tempo[i+1] - tempo[i]);
            cout << "\n" << espaco[i] <<" "<< espaco[i+1] << "=" << velocidade[i] << "M/s"; 
    }
    //calculando a aceleração entre a 2 velocidade armazenada e a 1 velocidade armazenada
    a = (velocidade[1] - velocidade[0])/( tempo[1] - tempo[0]);

    cout << "\n Aceleracao: " << a << "m/s^2";
}
