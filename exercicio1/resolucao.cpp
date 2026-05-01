#include <iostream>
using namespace std;
int main()
{
	int tab_n = 0, pecas = 0, num = 0;
	cin >> tab_n;
	int tabuleiro[tab_n];
	for (int i = 0; i < tab_n; i++)
	{
		cin >> pecas;
		tabuleiro[i]  = pecas;
	}
	for (int i = 0; i < tab_n; i++)
	{
		num = 0;
		if (tabuleiro[i] == 1) num++;
		if (tabuleiro[i-1] == 1) num++;
		if (tabuleiro[i+1] == 1) num++;
		cout << "\n" << num;
	}
}
