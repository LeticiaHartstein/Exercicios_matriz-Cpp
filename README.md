# Exercicios_matriz-Cpp
Vários desafios/ questões envolvendo matrizes respondidas com explicação e testes 
<ul>
  <li><a href="#exercicio1"> Exercicio 1 - Campo Minado</a></li>
</ul>

# Exercicio 1 📁
<a href="https://github.com/LeticiaHartstein/Exercicios_matriz-Cpp/blob/main/exercicio1/enunciado_exercicio.txt">Enunciado</a>
<h3>Resolução: </h3>
<a href="https://github.com/LeticiaHartstein/Exercicios_matriz-Cpp/blob/main/exercicio1/resolucao.cpp">Código🔗</a>

```cpp
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
```
