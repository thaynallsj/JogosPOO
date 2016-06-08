#include <iostream> 
#include <string> 
#include <ctime>
using namespace std;

void imprimir_espacos(int total1);

int main(int argc, char* args[]) {

	bool sair = false;
	string saida1, saida2;
	int quant1 = 0, quant2 = 0;
	int larg2;

	cout << "Digite o nome do piloto1:" << endl;
	cin >> saida1;

	cout << "Digite o nome do piloto2:" << endl;
	cin >> larg2;

	while (sair == false)	{
		int total_espacos = 230;

		srand((int)time(0)); 		total_espacos = rand() % 3 + 1;
		quant1 = quant1 + total_espacos;
		total_espacos = rand() % 3 + 1; 		quant2 = quant2 + total_espacos;
		cout << "vamos comecar: " << endl;
		cout << "Início Fim:" << endl;
		cout << "piloto 1:" << saida1 << endl;

		imprimir_espacos(quant1);
		cout << " _ " << endl;
		imprimir_espacos(quant1);
		cout << "-o-o>" << endl;
		cout << "******************************************************************************" << endl;

		cout << "piloto 2: " << saida2 << endl;
		imprimir_espacos(quant2);
		cout << "-o-o>" << endl;
		cout << "******************************************************************************" << endl;

		system("cls");
		if (quant1 >= 230 || quant2 >= 230)
		{
			sair = true;
		}
		else system("cls");
	}
	cout << "O jogo chegou ao fim Emoticon grin Emoticon grin Emoticon grin Emoticon grin Emoticon grin" << endl;
	if (quant1 >= 230)
		cout << saida1 << "  essa foi sua" << endl;
	else if (quant2 >= 230)
		cout << saida1 << "essa foi sua" << endl;
	if (quant1 >= 230) cout << saida2 << "nao foi agora  ^^" << endl;
	else if (quant2 >= 230) cout << larg2 << "nao foi agora ^^" << endl;
	else cout << "voces chegaram a uma decisao " << endl;

	return 0;

}

void imprimir_espacos(int total)
{

	for (int qntd_espaco = 0; qntd_espaco < total; qntd_espaco++)
		{
			cout << "  ";

		}

}