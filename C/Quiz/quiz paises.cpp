#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <conio.c>

int pontos, resposta;

void pergunta1() {
	printf("\nPergunta 1: Qual eh a capital da Alemanha?\n");
	printf("\n1- Frankfurt\n2- Berlim\n3- Munique\n4- Hamburgo\n\n");
	printf("Digite o numero de sua resposta: "); scanf("%d", &resposta);
	if (resposta == 2) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 2- Berlim\n\n");
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	system("pause");
	system("cls");
}

void pergunta2() {
	printf("\nPergunta 2: Quais sao as cores da bandeira da Escocia?\n");
	printf("\n1- Azul e Branco\n2- Azul e Vermelho\n3- Branco e Vermelho\n4- Branco, vermelho e preto\n\n");
	printf("Digite o numero de sua resposta: "); scanf("%d", &resposta);
	if (resposta == 1) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 1- Azul e branco\n\n");
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	system("pause");
	system("cls");
}

void pergunta3() {
	printf("\nPergunta 3: Qual eh o maior estado do Brasil em territorio?\n");
	printf("\n1- Amazonas\n2- Para\n3- Sao Paulo\n4- Mato Grosso\n\n");
	printf("Digite o numero de sua respota: "); scanf("%d", &resposta);
	if (resposta == 1) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Reposta correta: 1- Amazonas\n\n");
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	system("pause");
	system("cls");
}

void pergunta4() {
	printf("\nPergunta 4: Qual eh a captial do Peru?\n\n");
	printf("1- Rio Branco\n2- La Paz\n3- Sucre\n4- Lima\n\n");
	printf("Digite o numero de sua resposta: "); scanf("%d", &resposta);
	if (resposta == 4) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 4- Lima\n\n");
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	system("pause");
	system("cls");
}

void pergunta5() {
	printf("\nPergunta 5: Qual desses paises nao faz parte do Reino Unido?\n");
	printf("\n1- Pais de Gales\n2- Escocia\n3- Irlanda\n4- Irlanda do Norte\n\n");
	printf("Digite o numero de sua resposta: "); scanf("%d", &resposta);
	if (resposta == 3) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 3- Irlanda\n\n");
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	system("pause");
	system("cls");
}

void pergunta6() {
	printf("\nPergunta 6: Qual desses eh o maior rio do mundo?\n\n");
	printf("1- Rio Amazonas\n2- Rio Nilo\n3- Rio Solimoes\n4- Rio Congo\n\n");
	printf("Digite o numero de sua resposta: "); scanf("%d", &resposta);
	switch (resposta) {
		case 1:
			printf("\nResposta correta!\n\n");
			pontos++;
			printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
			break;
		case 2:
			printf("\nResposta correta!\n\n");
			pontos++;
			printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
			break;
		default:
			printf("\nResposta errada!\n\n");
			printf("Resposta correta: 1- Rio Amazonas ou 2- Rio Nilo*\n");
			printf("*nao se sabe ate hoje qual dos dois rios eh o maior, portanto, ambas as respostas estao corretas!\n\n");
			printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
			break;
	}
	system("pause");
	system("cls");
}

void pergunta7() {
	printf("\nPergunta 7: Qual eh o maior continente do mundo?\n\n");
	printf("1- America\n2- Europa\n3- Africa\n4- Asia\n\n");
	printf("Digite o numero de sua resposta: "); scanf("%d", &resposta);
	if (resposta == 4) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 4- Asia\n\n");
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	system("pause");
	system("cls");
}

void pergunta8() {
	printf("\nPergunta 8: Qual desses paises possui a quinta maior populacao do mundo?\n\n");
	printf("1- Estados Unidos\n2- Brasil\n3- Paquistao\n4- Indonesia\n\n");
	printf("Digite sua resposta: "); scanf("%d", &resposta);
	if (resposta == 3) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 3- Paquistao\n\n");
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	system("pause");
	system("cls");
}

void pergunta9() {
	printf("\nPergunta 9: Qual desses paises nao faz parte da Oceania?\n\n");
	printf("1- Nova Caledonia\n2- Ilhas Salomao\n3- Taiti\n4- Haiti\n\n");
	printf("Digite sua resposta: "); scanf("%d", &resposta);
	if (resposta == 4) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 4- Haiti\n\n");
		printf("Sua pontuacao: %d ponto(s)\n\n", pontos);
	}
	system("pause");
	system("cls");
}

main () {
	gotoxy(20,5); printf("Bem-vindo ao quiz de paises!\n\n");
	gotoxy(20,8); system("pause");
	system("cls");
	
	pergunta1();
	pergunta2();
	pergunta3();
	pergunta4();
	pergunta5();
	pergunta6();
	pergunta7();
	pergunta8();
	pergunta9();	
}
