//Meu primeiro código em C++
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[])
{

	string jog1, jog2;
	int vida1 = 20, vida2 = 20;


	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	cout << " O			   O" << endl;
	cout << ".T./		         \\.T." << endl;
	cout << " ^			   ^" << endl;
	cout << jog1 << "	                " << jog2 << endl;
	cout << "Vida: " << vida1 << "	       " << "Vida: " << vida2 << endl;

	int dado6;
	//Adiciona uma "semente" ao gerador de números
	srand(1234);
	//Gera um número aleatótio entre 1 e 6
	dado6 = rand() % 100 + 1;
	//Causa dano igual o valor gerado no "dado"
	vida1 = vida1 - dado6;

	//Mesma coisa para o jogador 2
	dado6 = rand() % 100 + 1;
	vida2 = vida2 - dado6;

	cout << "Vida: " << vida1 << "	" << "Vida: " << vida2 << endl;


	return 0;
}