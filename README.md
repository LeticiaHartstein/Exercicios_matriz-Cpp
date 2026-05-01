# Exercicios_matriz-Cpp
Vários desafios/ questões envolvendo matrizes respondidas com explicação e testes 
<ul>
  <li><a href="#exercicio1"> Exercicio 1 - Campo Minado</a></li>
  <li><a href="#exercicio2"> Exercicio 2 - Corrida</a></li>
  <li><a href="#exercicio3"> Exercicio 3 - Maquina de minhocas</a></li>

</ul>

# Exercicio 1 📁
<a href="https://github.com/LeticiaHartstein/Exercicios_matriz-Cpp/blob/main/exercicio1/enunciado_exercicio.txt" id="exercicio1">Enunciado</a>
<h3>Resolução: </h3>
<a href="https://github.com/LeticiaHartstein/Exercicios_matriz-Cpp/blob/main/exercicio1/resolucao.cpp">Código🔗</a>

```cpp
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
```
# Exercicio 2 📁 
<a href="https://github.com/LeticiaHartstein/Exercicios_matriz-Cpp/blob/main/exercicio2/enunciado_exercicio.txt" id="exercicio2">Enunciado</a>
<h3>Resolução: </h3>
<a href="https://github.com/LeticiaHartstein/Exercicios_matriz-Cpp/blob/main/exercicio3/resolucao.cpp">Código🔗</a>

```cpp
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
```
<a href="">Código🔗</a>

# Exercicio 3 📁
<a href="https://github.com/LeticiaHartstein/Exercicios_matriz-Cpp/blob/main/exercicio3/enenciado_exercicio.txt" id="exercicio3">Enunciado</a>
<h3>Resolução: </h3>
<a href="https://github.com/LeticiaHartstein/Exercicios_matriz-Cpp/blob/main/exercicio3/resolucao.cpp">Código🔗</a>

```cpp
#include <iostream>
using namespace std;
int main()
{
	int linha = 0, celula =  0, dado = 0, maior = 0;
	cin >> linha >> celula;
	int maquinas[linha][celula];
	//loop para preencher valores em cada célula
    for (int li = 0; li < linha; li++)
    {
        for (int ce = 0; ce < celula; ce++)
        {
            //aqui a váriavel dado armazena o input, adicionando ele a um endereço no array
            cin >> dado; 
            maquinas[li][ce] = dado; 
        }
    }
    
    //aqui, foi trocado o li por ce, já que estaremos somando os valores de célula que está na vertical vertical
     for (int ce = 0; ce < celula; ce++)
    {
        //reutilizei a váriavel dado para armazenar a soma das colunas
    dado = 0;
        for (int li = 0; li < linha; li++)
        {
          dado += maquinas[li][ce];
        }
        //se a soma atual for maior do que a armazenada anteriormente
        if ( dado > maior)
        {
            maior = dado;
        }
    }
    cout << "\n"<<maior;
}
```

