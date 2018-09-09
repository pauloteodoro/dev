#include <stdio.h>
#include <iostream>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <string>

#define limpa system ("cls")
#define pausa system ("pause")

using namespace std;

	// desclaração prototipos
	int QualUsuario();
	int compras();

	// funcao main
	int main()
	{


		int EscolhaUsuario, EscolhaCaixa;
		int CodigoProduto, QuantidadeProduto;
		string NomeProduto, ValidadeProduto;


		EscolhaUsuario = QualUsuario();												// chamadar funcao qual usuario  para indificar qual usuario;
		if (EscolhaUsuario == 1)
		{
			cout << "               Mercado ESTRELA DA MANHA - versao git " << endl << endl;
			cout << " Bem vindo responsavel de compras" << endl;

		}
		else
		{
			cout << "               Mercado ESTRELA DA MANHA " << endl << endl;
			cout << " Bem vindo Operador de caixa " << endl << endl;
			do
			{
				cout << " (1) - Consulta " << endl;
				cout << " (2) - Compras" << endl;
				cout << " Digite opção desejada  : ";
				cin >> EscolhaCaixa;
				limpa;
			} while ((EscolhaCaixa <= 0) || (EscolhaCaixa >= 3));

			switch (EscolhaCaixa)
			{
			case 1:
				cout << " Escolha produto para consulta " << endl;
				break;
			case 2:

				compras();
			}
		}


		pausa;



	}

	// funcao para escolher qual usuario vai utilizar sistema;

	int QualUsuario() {
		int usuario = 0;
		do
		{
			cout << "                Mercado ESTRELA DA MANHA " << endl << endl;
			cout << " (1)  -  Responsavel de compras " << endl;
			cout << " (2)  -  Caixa " << endl;
			cout << " Digite opção desejada : ";
			cin >> usuario;
			limpa;
		} while ((usuario <= 0) || (usuario >= 3));

		return(usuario);
	}

	// funcao para compras  produtos e quantidades;
	int compras() {
		int CodigoProduto, QuantidadeProduto, EncerrarContinuar = 0;
		cout << "                Mercado ESTRELA DA MANHA -  CAIXA " << endl << endl;

		do
		{
			cout << " Digite codigo do produto : ";
			cin >> CodigoProduto;
			cout << endl << " Digite quantidade produto : ";
			cin >> QuantidadeProduto;
			cout << endl << endl;
			do
			{
				limpa;
				cout << "                Mercado ESTRELA DA MANHA -  CAIXA " << endl << endl;
				cout << " (1) -  Encerrar compras " << endl;
				cout << " (2) -  Continuar compras " << endl;
				cin >> EncerrarContinuar;
			} while ((EncerrarContinuar <= 0) || (EncerrarContinuar >= 3));

		} while (EncerrarContinuar != 1);

		return (0);
	}





