//Meu primeiro código em C++ 
#include <iostream> // biblioteca principal 
#include <string> // usar a função string
#include <ctime> // usar o tempo como aleatório 
using namespace std;

int main() //função principal
{
	bool sair = false; // função buleana
	string jog1, jog2;
	int vida1 = 20, vida2 = 20; //diz o valor de vida
	int ataque1 = 4, defesa1 = 1; // diz o valor Ataque
	int ataque2 = 4, defesa2 = 1; // valor de defesa

        //digitar o nome do jogador
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1; //salvar o nome

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;
	
	while (sair == false) 
	{
         // imprimir O personagem
		cout << " o                    o" << endl;
		cout << ".T./                \\.T." << endl;
		cout << " ^                    ^" << endl;
		cout << jog1 << "                " << jog2 << endl;
		cout << "Vida: " << vida1 << "           " << "Vida: " << vida2 << endl;
		system("pause");

		int dado6;

		// Adiciona uma "semente" ao gerador de números
		srand((int)time(0));

		// Gera um número aleatório entre 1 a 6
		dado6 = rand() % 6 + 1;
		// Causa dano igual o valor gerado no "dado"
		vida1 = vida1 - dado6;

		// Gera um número aleatório entre 1 a 6
		dado6 = rand() % 6 + 1;
		// Causa dano igual o valor gerado no "dado"
		vida2 = vida2 - dado6;

		system("cls"); //apagar tudo dePois da rodada

		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
	}
	
	return 0;

}
