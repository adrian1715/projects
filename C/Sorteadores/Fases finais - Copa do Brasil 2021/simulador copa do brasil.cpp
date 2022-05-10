#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int a;

void sorteador() {
	int elements = 8;
    srand(time(NULL));

    char *times1[elements];
    int index[elements];
    int i, j;
    int r;
    int exists;
    
    char *times2[elements];
    int index2[elements];
//	int i2, j2;
    int r2;
    int exists2;

	times1[0] = "Santos";
	times1[1] = "Bahia";
	times1[2] = "Sao Paulo";
	times1[3] = "Fluminense";
	times1[4] = "Gremio";
	times1[5] = "Athletico Paranaense";
	times1[6] = "Flamengo";
	times1[7] = "Atletico Mineiro";

	times2[0] = "CRB";
	times2[1] = "Fortaleza";
	times2[2] = "Criciuma";
	times2[3] = "Atletico Goianiense";
	times2[4] = "Vitoria";
	times2[5] = "Juazeirense";
	times2[6] = "ABC";
	times2[7] = "Vasco";
	
    for (i = 0; i < elements; i++) {
        exists = 1;
        while (exists) {
            r = rand() % elements;
            for (j = 0; j <= i; j++) {
                if (index[j] == r) {
                    exists = 1;
                    break;
                }
                else {
                    exists = 0;
                }
            }
        }
        exists2 = 1;
        while (exists2) {
            r2 = rand() % elements;
            for (j = 0; j <= i; j++) {
                if (index2[j] == r2) {
                    exists2 = 1;
                    break;
                }
                else {
                    exists2 = 0;
                }
            }
        }
        index[i] = r;
        index2[i] = r2;
        printf("%s x %s\n", times1[r], times2[r2]);
//        Sleep(1500);
    }
    printf("\n1- Sortear novamente\n2- Sair\n");
	scanf("%d", &a);
//    system("pause");
}

main () {

	do {
		system("cls");
		sorteador();
		while (a>2 || a<1) {
			printf("Valor invalido!\n");
			printf("\n1- Sortear novamente\n2- Sair\n");
			scanf("%d", &a);
		}
	} while (a==1);
}
