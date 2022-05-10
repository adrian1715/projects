#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main () {
	printf("Bem-vindo ao quiz!\n\n");
	system("pause");
	system("cls");
	int pontos, resp;
	
//	PERGUNRTA 01:
	printf("01) Qual eh o esporte mais praticado no mundo?\n");
	printf("1-Futebol\n2-Basquete\n3-Volei\n4-Tenis\n\n");
	scanf("%d",&resp);
	if (resp==1) {
	pontos++;
	printf("\nResposta correta!\n\n");
	printf("Sua pontuacao: %d\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 1-Futebol\n\n");
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	system("pause");
	system ("cls");
	
//	PERGUNTA 2:
	printf("02) Quais sao as cores da bandeira do Uruguai?\n");
	printf("1-Azul, verde e amarelo\n2-Vermelho e preto\n3-Azul e branco\n4-Azul, branco e amarelo\n\n");
	scanf("%d",&resp);
	if (resp == 4) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 4-Azul, branco e amarelo\n\n");
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	system("pause");
	system("cls");
	
//	PERGUNTA 3
	printf("03) Quem eh o atual presidente do Estados Unidos?\n");
	printf("1-Barack Obama\n2-Bill Clinton\n3-Joe Biden\n4-Donald Trump\n\n");
	scanf("%d",&resp);
	if (resp == 3) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 4-Donald Trump\n\n");
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	system("pause");
	system("cls");
	
//	PERGUNTA 4
	printf("04) Qual a capital da Nova Zelandia?\n");
	printf("1-Auckland\n2-Wellington\n3-Washington\n4-Sydney\n\n");
	scanf("%d",&resp);
	if (resp==2) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 2-Wellington\n\n");
		printf("Sua pontuacao: %d\n\n",pontos);
	}
	system("pause");
	system("cls");
	
//	PERGUNTA 5
	printf("05) Qual o canal com mais inscritos do YouTube?\n");
	printf("1-Galinha Pintadinha\n2-Justin Bieber\n3-PewDiePie\n4-T-Series\n\n");
	scanf("%d",&resp);
	if (resp==4) {
		pontos++;
		printf("\nResposta correta!\n\n");
		printf("Sua pontuacao: %d\n\n",pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 3-PewDiePie\n\n");
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	system("pause");
	system("cls");
	
//	PERGUNTA 6
	printf("06) Qual a maior bilheteria da historia do cinema?\n");
	printf("1-Titanic\n2-Avatar\n3-Star Wars - O Despertar da Forca\n4- Vingadores: Ultimato\n\n");
	scanf("%d",&resp);
	if (resp==2) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 2-Avatar\n\n");
		printf("Sua pontuacao: %d\n\n",pontos);
	}
	system("pause");
	system("cls");
	
//	PERGUNTA 7
	printf("07 - Em qual Copa do Mundo o Brasil foi campeao pela primeira vez?\n");
	printf("1) 2002 - Coreia do Sul/Japao\n2) 1950 - Brasil\n3) 1958 - Suecia\n4) 1962 - Chile\n\n");
	scanf("%d",&resp);
	if (resp==3) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 3) 1958 - Suecia\n\n");
		printf("Sua pontuacao: %d\n\n",pontos);
	}
	system("pause");
	system("cls");
	
	// PERGUNTA 8
	printf("08) Qual pais possui a segunda maior populacao do mundo?\n");
	printf("1- China\n2- India\n3- Brasil\n4- Russia\n\n");
	scanf("%d", &resp);
	if (resp == 2) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 2- India\n\n");
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	system("pause");
	system("cls");
	
	// PERGUNTA 9
	printf("09) Qual time eh o maior campeao da Liga dos Campeos da Europa?\n");
	printf("1- Barcelona\n2- Real Madrid\n3- Paris Saint-Germain\n4- Liverpool\n\n");
	scanf("%d", &resp);
	if (resp == 2) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 2- Real Madrid\n\n");
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	system("pause");
	system("cls");
	
	// PERGUNTA 10
	printf("10) Em aproximadamente qual mes do ano a Terra mais fica mais proxima do Sol?\n");
	printf("1- Janeiro\n2- Fevereiro\n3- Junho\n4- Novembro\n\n");
	scanf("%d", &resp);
	if (resp == 1) {
		printf("\nResposta correta!\n\n");
		pontos++;
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	else {
		printf("\nResposta errada!\n\n");
		printf("Resposta correta: 1- Janeiro\n\n");
		printf("Sua pontuacao: %d\n\n", pontos);
	}
	system("pause");
	system("cls");
	
	getch();
}
