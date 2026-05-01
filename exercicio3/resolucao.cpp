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