#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct ppl{

    char nome[25];
    char cpf[15];

}pessoa[5];

void preenche();//1
void exibir();//2
void comparar();//3

int main(){
    int sair = 0, opt;
    do{
        printf("OPCOES\n\n1--preencher vetor\n2--exibir vetor\n3--comparar cpf\n0--sair\n\n");
        printf("opção: ");
        scanf("%d", &opt);
        system("cls");
        switch(opt){
        case 1:
            preencher();
            getch();
            system("cls");
            break;
        case 2:
            exibir();
            getch();
            system("cls");
            break;
        case 3:
            comparar();
            getch();
            system("cls");
            break;
        case 0:
            sair = 1;
            break;
        default:
            printf("opção invalida.");
            system("cls");
            break;
        }

    }while(sair == 0);
}
void preencher(){
    int i=0;
    for(i; i<5; i++){
        printf("Nome: ");
        fflush(stdin);
        gets(pessoa[i].nome);
        printf("\ncpf: ");
        gets(pessoa[i].cpf);
        system("cls");
    }
};
void exibir(){
    int i=0;
    for(i; i<5; i++){
        printf("\nnome: %s", pessoa[i].nome);
        printf("\ncpf: %s", pessoa[i].cpf);
    }
};
void comparar(){
    int i = 0, j, repetidos=0;
    for (i; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(pessoa[i].cpf, pessoa[j].cpf)==0) {
                repetidos++;
            }
        }
    }if(repetidos>0){
        printf("existem cpfs repetidos no vetor.");
    }else{
        printf("nao existem cpfs repetidos no vetor.");
    }
}
