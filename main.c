
#include "englib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void exibe_intrucoes() {
    printf("********* INSTRUCOES *********\n");
    printf("lOREM Instrucoes\n");
    printf("2\n");
    printf("3\n");
    printf("44\n");
    printf("5?\n");
    printf("6\n");
    printf("******************************\n");
}

int menu() {
    int op;
    do{
        printf("************ FIFA ************\n");
        printf("1) Instrucoes\n");
        printf("2) Cadastrar classificados\n");
        printf("3) Sortear grupos\n");
        printf("4) Log do sorteio\n");
        printf("5) Qual a probabilidade?\n");
        printf("6) Sair\n");
        printf("******************************\n");
        printf("Escolha um numero:\n");
        fflush(stdin); scanf("%d",&op);
    } while((op!=1)&&(op!=2)&&(op!=3)&&(op!=4)&&(op!=5)&&(op!=6));
    return op;
}

void sai() {
    system("exit");
}

void clrscr() {
    system("cls");
}

int main()
{
    int i, n=0;
    enum  op_menu  option;
    do {
        option = menu() - 1;
        switch(option)
        {
            case intrucoes:
                exibe_intrucoes();
                break;
            case cadastrar:
                break;
            case sortear:
                break;
            case log:
                break;
            case probabilidade:
                break;
            case sair:
                sai();
                break;
            default:
                clrscr();
        }
    } while(option  !=  sair);

    return 0;
}
