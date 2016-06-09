
#include <iostream> // biblioteca principal
#include <string> //Para usar o string
#include <ctime> // usar o tempo como uma semente para gerar Um número 
using namespace std;

void imprimir_espacos(int total1); // para encontra a função  void criada

int main(int argc, char* args[]) { // função principal

	bool sair = false; // variável  utilizada dentro do laço while, ela é do tipo buleana
	string saida1, saida2; // variável  para salvar os nomes do jogadores
	int quant1 = 0, quant2 = 0; // variável Que é para dar os espaços em cada rodada depende do numero adicionado
	
        // digitar o nome da pessoa que vai jogar
	cout << "Digite o nome do piloto1:" << endl;
	cin >> saida1;// salvar o nome digitado 

	cout << "Digite o nome do piloto2:" << endl; //digitar O nome da pessoa que vai jogar
	cin >> saida2; // salvar o nome digitar 

	while (sair == false)	{ //decidir a hora que o laço  que vai ser quebrado
		int total_espacos = 230; // total de espaço da pista

		srand((int)time(0)); 	//gerador De um número aleatório 
		//para o piloto1 será gerado um número aleatório de 1 a 3
		total_espacos = rand() % 3 + 1;
		quant1 = quant1 + total_espacos;
		
		// para o piloto2 será gerado número aleatório de 1 a 3
		total_espacos = rand() % 3 + 1; 	
		quant2 = quant2 + total_espacos;
	        
	        //letreiro de início 
		cout << "vamos comecar: " << endl;
		cout << "Início             Fim:" << endl;
		cout << "piloto 1:" << saida1 << endl; //retornar o nome que foi colocado no piloto e imprimir

		imprimir_espacos(quant1); //número dos espaços que o carrinho vai andar
		cout << " _ " << endl;// desenha a primeira parte do carrinho
		imprimir_espacos(quant1); //utilizar o número de espaços que o carrinho vai andar
		cout << "-o-o>" << endl; // desenhando o carrinho
		//imprimir a pista
		cout << "******************************************************************************" << endl;

		cout << "piloto 2: " << saida2 << endl; // retornar o nome que foi colocado no piloto 2 e imprimir
		imprimir_espacos(quant2);// número de espaço que o carrinho vai andar
		cout << " - "
		imprimir_espaço (quant2); //usar o número que o carrinho vai andar
		cout << "-o-o>" << endl; //desenho do carrinho 
		//imprimir a pista
		cout << "******************************************************************************" << endl;

		system("cls");// Apagar tudo depois da rodada
		//se sair não limpa 
		if (quant1 >= 230 || quant2 >= 230)// quando a condição for falsa o jogo parar 
		{
			sair = true; //reparar o laço 
		}
		else system("cls");//caso continue limpar a tela
	}
	//quando  jogo e chegar o fim
	cout << "O jogo chegou ao fim " << endl;
	
	//irá dizer quem ganhou a corrida
	if (quant1 >= 230)
	
		cout << saida1 << "  essa foi sua" << endl;
	else if (quant2 >= 230)
		cout << saida1 << "essa foi sua" << endl;
	if (quant1 >= 230) cout << saida2 << "nao foi agora  ^^" << endl;
	else if (quant2 >= 230) cout << larg2 << "nao foi agora ^^" << endl;
	else cout << "voces chegaram a uma decisao " << endl;

	return 0;

}

void imprimir_espacos(int total) //usando a função void
{

	for (int qntd_espaco = 0; qntd_espaco < total; qntd_espaco++) // for pq não sabe quando vai parar
		{
			cout << "  "; //espaço que sE vaí dá depende do numero

		}

}
