#include <iostream>
using namespace std;
int main()
{
	int competidor = 0, voltas = 0, dado = 0, gan = 10000000000000, compet = 0;
	cin >> competidor >> voltas;
	int tabela[competidor][voltas];
	for (int y =0; y< competidor; y++)
	{
	    for (int x =0; x < voltas; x++)
	    {
	        cin >> dado;
	        tabela[y][x] = dado;
	    }
	}
	for (int comp = 0; comp < competidor; comp++)
	{
	   dado = 0;
	    for(int volt = 0; volt < voltas; volt++)
	    {
	        dado += tabela[comp][volt];
	    }
	    if (dado < gan )
	    {
	       gan = dado;
	       compet = comp;
	   }
	}
	cout << "\n" <<compet+1;
}