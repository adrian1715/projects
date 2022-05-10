#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 200




char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE], op;

void cadastro () {
	static int linha;
	do {
		system("cls");
		printf("Digite o nome: ");
		scanf("%s", &nome[linha]);
		
		printf("\nDigite o email: ");
		scanf("%s", &email[linha]);
		
		printf("\nDigite o cpf: ");
		scanf("%d", &cpf[linha]);
		
		printf("\nO que deseja fazer?\n1- Continuar cadastrando\n2- Voltar ao menu\n\n");
		scanf("%d", &op);
		
		linha++;
	} while (op==1);
}

void pesquisa() {
	system("cls");
	int cpfPesquisa; // para pesquisa de cpf
	char emailPesquisa[50]; // para pesquisa de email
	int i; //
	
	do {
		system("cls");
		printf("O que deseja pesquisar?\n1- CPF\n2- Email\n");
		scanf("%d", &op);
		switch (op) {
			case 1: // pesquisar cpf
				system("cls");
				printf("Digite o CPF: ");
				scanf("%d", &cpfPesquisa);
				for (i=0; i<SIZE; i++) {
					if (cpf[i]==cpfPesquisa) {
						printf("\nNome: %s\nEmail: %s\nCPF: %d\n\n", nome[i], email[i], cpf[i]);
					}
				}
				break;
				
			case 2:
				system("cls");
				printf("Digite o email: ");
				scanf("%s", emailPesquisa);
				for (i=0; i<SIZE; i++) {
					if (strcmp(email[i], emailPesquisa)==0) { // para verificar se o email cadastrado é o mesmo que o pesquisado
						printf("\nNome: %s\nEmail: %s\nCPF:%d\n\n", nome[i], email[i], cpf[i]);
					}
				}
				break;
				
/*			case 3: // voltar ao menu
				int a;
				while (a<1 || a>4) {
				printf("O que deseja fazer?\n1- Cadastro\n2- Pesquisa\n3- Lista de cadastros\n4- Sair\n\n");
				scanf("%d", &a);
				
					switch(a) {
						case 1:
							cadastro();
							break;
						case 2:
							pesquisa();
							break;
						case 3:
							lista();
							break;
						case 4:
							exit(0); // encerra o programa (biblioteca stdlib.h)
						default:
							printf("Opcao invalida!\n\n");
							break;
					}
				}
*/

			default:
				printf("\nOpcao invalida! ");
				break;
		}
		printf("O que deseja fazer?\n1- Continuar pesquisando\n2- Voltar ao menu\n\n");
		scanf("%d", &op);
	} while (op==1);
}

void lista () {
	system("cls");
	int i,b;
	for (i=0; i<SIZE; i++) {
		if (cpf[i]>0) { // para verificar se foi feito algum registro
			printf("Cadastro %d:\nNome: %s\nEmail: %s\nCPF:%d\n\n", i+1, nome[i], email[i], cpf[i]);
			system("pause");
//			break;
		}
		else {
			printf("Nenhum cadastro ainda foi efetuado!");
			break;
/*			printf("\n1- Voltar ao  menu\n2- Sair\n");
			scanf("%d", &b);
			while (b>1 || b<2) {
				if (b==1) {
					system("cls");
					int a;
					while (a<1 || a>4) {
					
						printf("O que deseja fazer?\n1- Cadastro\n2- Pesquisa\n3- Lista de cadastros\n4- Sair\n\n");
						scanf("%d", &a);
						
							switch(a) {
								case 1:
									cadastro();
									break;
								case 2:
									pesquisa();
									break;
								case 3:
									lista();
									break;
								case 4:
									exit(0); // encerra o programa (biblioteca stdlib.h)
								default:
									printf("Opcao invalida!\n\n");
									break;
							}
					}
				}
				if (b==2) {
					exit(0);
				}
				else {
					printf("Opcao invalida! Tente novamente!");
				}
			}*/
		}
	}
}

void menu () {
	system("cls");
	int a;
//	while (a<1 || a>4) {
	
	printf("O que deseja fazer?\n1- Cadastro\n2- Pesquisa\n3- Lista de cadastros\n4- Sair\n\n");
	scanf("%d", &a);
	
		switch(a) {
			case 1:
				cadastro();
				break;
			case 2:
				pesquisa();
				break;
			case 3:
				lista();
				break;
			case 4:
				exit(0); // encerra o programa (biblioteca stdlib.h)
			default:
				printf("Opcao invalida!\n\n");
				break;
		}
//	}
	
}

main () {
	menu();
	while (op>1) {
		menu();
	}
}
