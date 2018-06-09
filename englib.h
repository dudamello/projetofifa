#ifndef  _englib_h
#define _englib_h

typedef struct{
    int id;
    char nome[20];
    char confederacao[10];
}selecoes;

typedef struct {
    int id;
    selecoes s[8];
}potes;

typedef struct {
    int id;
    potes p;
    selecoes s[4];
}grupos;

enum  op_menu{intrucoes, cadastrar, sortear, log, probabilidade, sair};

int menu();

void exibe_intrucoes();

void sai();

void clrscr();

#endif
