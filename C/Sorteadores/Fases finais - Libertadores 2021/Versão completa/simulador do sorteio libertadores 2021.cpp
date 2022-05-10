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

	times1[0] = "Palmeiras";
	times1[1] = "Internacional";
	times1[2] = "Barcelona SC";
	times1[3] = "Fluminense";
	times1[4] = "Racing";
	times1[5] = "Argentinos Juniors";
	times1[6] = "Flamengo";
	times1[7] = "Atletico Mineiro";

	times2[0] = "Defensa y Justicia";
	times2[1] = "Olimpia";
	times2[2] = "Boca Juniors";
	times2[3] = "River Plate";
	times2[4] = "Sao Paulo";
	times2[5] = "Universidad Catolica";
	times2[6] = "Velez Sarsfield";
	times2[7] = "Cerro Porteno";
	
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



