#include <iostream>
using namespace std;
int main()
{
	//criando váriaveis
	int tab_n = 0, pecas = 0, num = 0;
	cin >> tab_n;
	int tabuleiro[tab_n];
	//loop para inserir as peças
	for (int i = 0; i < tab_n; i++)
	{
		cin >> pecas;
		tabuleiro[i]  = pecas;
	}
	//loop para verificar o campo
	for (int i = 0; i < tab_n; i++)
	{
		num = 0;
		//verificar as posições das minas
		//
		//
		//se a célula verificada for uma mina adiciona +1 em num
		if (tabuleiro[i] == 1) num++;
		//se a célula que antecede a atual for uma mina adicionar +1 em num
		if (tabuleiro[i-1] == 1) num++;
		//se a célula que sucede a atual for uma mina adicionar +1 em num
		if (tabuleiro[i+1] == 1) num++;

		//resultado da análise apenas para tabuleiro[i]
		cout << "\n" << num;
	}
}
