#include <stdio.h>
#include <conio.c>
#include <conio.h>
#include <string.h>

void introducao() {
	//LETRA "C"
	for (int i=0; i<6; i++) {
		gotoxy(23,5+i); printf("%c", 219); // LINHA VERTICAL DA PRIMEIRA LETRA "C"
	}
	for (int i=0; i<5; i++) {
		gotoxy(24+i,5); printf("%c", 219); // PRIMEIRA LINHA HORIZONTAL DA PRIMEIRA LETRA "C"
	}
	for (int i=0; i<5; i++) {
		gotoxy(24+i,10); printf("%c", 219);
	}
	// -----------------------------------------------------------------
	// BARRA
	gotoxy (31,10); printf("%c", 219);
	gotoxy (32,9); printf("%c", 219);
	gotoxy (33,8); printf("%c", 219);
	gotoxy (34,7); printf("%c", 219);
	gotoxy (35,6); printf("%c", 219);
	gotoxy (36,5); printf("%c", 219);
	// ------------------------------------------------------------------
	// SEGUNDA LETRA "C"
	for (int i=0; i<6; i++) {
		gotoxy(39,5+i); printf("%c", 219); // LINHA VERTICAL DA PRIMEIRA LETRA "C"
	}
	for (int i=0; i<5; i++) {
		gotoxy(40+i,5); printf("%c", 219); // PRIMEIRA LINHA HORIZONTAL DA PRIMEIRA LETRA "C"
	}
	for (int i=0; i<5; i++) {
		gotoxy(40+i,10); printf("%c", 219); // SEGUNDA LINHA HORIZONTAL
	}
	// -------------------------------------------------------------------
	// "++"
	for (int i=0;i<5; i++) {
		gotoxy(47+i,8); printf("%c", 219); // TRAÇO HORIZONTAL DO PRIMEIRO "+"
	}
	for (int i=0; i<5;i++) {
		gotoxy(49, 6+i); printf("%c", 219); // TRAÇO VERTICAL DO "+"
	}
	for (int i=0;i<5; i++) {
		gotoxy(53+i,8); printf("%c", 219); // TRAÇO HORIZONTAL DO SEGUNDO "+"
	}
	for (int i=0; i<5;i++) {
		gotoxy(55, 6+i); printf("%c", 219); // TRAÇO VERTICAL DO "+"
	}
	// -------------------------------------------------------------------
	// LETRA "L"
	for (int i=0; i<6;i++) {
		gotoxy(13,12+i); printf("%c", 219); //LINHA VERTICAL DO 'L'
	}
	for (int i=0; i<5; i++) {
		gotoxy(13+i, 17); printf("%c", 219); //LINHA HORIZONTAL DO 'L'
	}
	// -------------------------------------------------------------------
	// LETRA "E"
	for (int i=0; i<6; i++) {
		gotoxy(20,12+i); printf("%c", 219); //LINHA VERTICAL DO 'E'
	}
	for (int i=0; i<5; i++) {
		gotoxy(20+i,12); printf("%c", 219);//PRIMEIRA LINHA HORIZONTAL DO 'E'
	}
	for (int i=0; i<5; i++) {
		gotoxy(20+i,14); printf("%c", 219); //SEGUNDA LINHA HORIZONTAL
	}
	for (int i=0; i<5; i++) {
		gotoxy(20+i, 17); printf("%c", 219); //TERCEIRA LINHA HORIZONTAL (EM BAIXO)
	}
	// ---------------------------------------------------------------------
	// LETRA "A"
	for (int i=0; i<5; i++) {
		gotoxy(27,13+i); printf("%c", 219); // PRIMEIRA LINHA VERTICAL DO 'A'
	}
	for (int i=0; i<4; i++) {
		gotoxy(28+i,12); printf("%c", 219); //PRIMERIRA LINHA HORIZONTAL DO 'A'
	}
	for (int i=0; i<5; i++) {
		gotoxy(32,13+i); printf("%c", 219); //SEGUNDA LINHA VERTICAL
	}
	for (int i=0; i<5; i++) {
		gotoxy(27+i,14); printf("%c", 219); // SEGUNDA LINHA/TRACO HORIZONTAL
	}
	// ----------------------------------------------------------------------
	// LETRA "R"
	for (int i=0; i<6; i++) {
		gotoxy(35,12+i); printf("%c", 219); //PRIMEIRA LINHA VERTICAL
	}
	for(int i=0; i<5;i++) {
		gotoxy(35+i,12); printf("%c", 219); // PRIMEIRA LINHA HORIZONTAL
	}
	gotoxy (40,13); printf("%c", 219);
	gotoxy(40,14); printf("%c", 219);
	for (int i=0; i<5; i++) {
		gotoxy(35+i,15); printf("%c", 219);
	}
	for (int i=0; i<2; i++) {
		gotoxy(40,16+i); printf("%c", 219);
	}
	// --------------------------------------------------------------------------
	// LETRA "N"
	for (int i=0; i<6; i++) {
		gotoxy(43,12+i); printf("%c", 219); // PRIMEIRA LINHA VERTICAL
	}
	gotoxy(44,12); printf("%c", 219);
	gotoxy(45,13); printf("%c", 219);
	gotoxy(46,14); printf("%c", 219);
	gotoxy(47,15); printf("%c", 219);
	gotoxy(48,16); printf("%c", 219);
	for (int i=0; i<6; i++) {
		gotoxy(49,12+i); printf("%c", 219);
	}
	// ---------------------------------------------------------------------------
	// LETRA "I"
	for (int i=0; i<6; i++) {
		gotoxy(52,12+i); printf("%c", 219);
	}
	// ----------------------------------------------------------------------------
	// LETRA "N"
	for (int i=0; i<6; i++) {
		gotoxy(55,12+i); printf("%c", 219); // PRIMEIRA LINHA VERTICAL
	}
	gotoxy(56,12); printf("%c", 219);
	gotoxy(57,13); printf("%c", 219);
	gotoxy(58,14); printf("%c", 219);
	gotoxy(59,15); printf("%c", 219);
	gotoxy(60,16); printf("%c", 219);
	for (int i=0; i<6; i++) {
		gotoxy(61,12+i); printf("%c", 219);
	}
	// -----------------------------------------------------------------------------
	// LETRA "G"
	for (int i= 0; i<6; i++) {
		gotoxy(64+i,12); printf("%c", 219); // PRIMEIRA LINHA HORIZONTAL
	}
	for (int i=0; i<5; i++) {
		gotoxy(64,13+i); printf("%c", 219); // PRIMEIRA LINHA VERTICAL
	}
	for (int i=0; i<6; i++) {
		gotoxy(64+i, 17); printf("%c", 219); // SEGUNDA LINHA HORIZONTAL
	}
	for (int i=0; i<3; i++) {
		gotoxy(69,15+i); printf("%c", 219);
	}
	gotoxy (68,15); printf("%c", 219);
	gotoxy(67,15); printf("%c", 219);
	
	printf("\n\n\n\n\n\n\n\t        ");
	system("pause");
	system("cls");
}

main () {
	introducao();
}
