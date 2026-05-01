#include <iostream>
using namespace std;
int main()
{
	//criando váriaveis, o gan tem o maior valor para que dado sempre sejá menor em sua primeira comparação 
	int competidor = 0, voltas = 0, dado = 0, gan = 10000000000000, compet = 0;
	cin >> competidor >> voltas;
	int tabela[competidor][voltas];
	//loop para adicionar informações de voltas para cada competidor
	for (int y =0; y< competidor; y++)
	{
	    for (int x =0; x < voltas; x++)
	    {
	        cin >> dado;
	        tabela[y][x] = dado;
	    }
	}
	//loop para encontrar o vencerdor(o mais rápido)
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
	//exibindo
	cout << "\n" <<compet+1;
	
}
