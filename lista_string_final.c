#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct ppl{

    char nome[25];
    char cpf[15];

}pessoa[5];

void e1();
void e2();
void e3();
void e4();
void e5();
void e6();
void scap (char* a);
int cont(char* str, char c);
void preenche();//1
void exibir();//2
void comparar();//3

int main(){

    int opt,trg =0;
    do{
        printf("Escolha o exercicio(de 1 a 6): ");
        scanf("%d", &opt);
        system("cls");

        switch(opt){
        case 1:
            e1();
            break;
        case 2:
            e2();
            break;
        case 3:
            e3();
            break;
        case 4:
            e4();
            break;
        case 5:
            e5();
            break;
        case 6:
            e6();
            break;
        case 0:
            trg = 1;
            break;
        default:
            system("cls");
            break;
        }
    }while(trg == 0);
}
void e1(){
    char n[160];
    printf("Frase: ");
    fflush(stdin);
    gets(n);
    printf("quantidade de caracteres da frase: %d", strlen(n));
    getch();
    system("cls");
}
void e2(){
    char n[160];
    char *separar;
    int i = 0;
    printf("Frase: ");
    fflush(stdin);
    gets(n);
    separar = strtok(n," ");
    while(n != NULL){
        printf("%s\n",separar);
        separar=strtok(NULL," ");
        if(separar==NULL){
            break;
        }
    }
    getch();
    system("cls");
};
void e3(){
    char n[160];
    printf("Frase: ");
    fflush(stdin);
    gets(n);
    scap(n);
    getch();
    system("cls");
};
void e4(){
        char a[50], buff[50];
    int i, j;
    printf("Frase: ");
    fflush(stdin);
    gets(a);

    j=strlen(a)-1;
    for(i=0; a[i] !='\0'; i++){
        buff[j]=a[i];
        j--;
    }
    buff[i]='\0';
	strcpy(a,buff);
	printf("Frase invertida: %s", a);
	getch();
    system("cls");
};
void e5(){
    char frase[100];
    char c;
    printf("frase: ");
    fflush(stdin);
    gets(frase);
    printf("\ncaractere: ");
    scanf("%c",&c);
    system("cls");
    printf("o caractere '%c' aparece %d vezes na frase",c, cont(frase,c));
    getch();
    system("cls");
};
void e6(){
    int sair = 0, opt;
    do{
        printf("OPCOES\n\n1--preencher vetor\n2--exibir vetor\n3--comparar cpf\n0--sair\n\n");
        printf("opção: ");
        scanf("%d", &opt);
        system("cls");
        switch(opt){
        case 1:
            preencher();
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
            system("cls");
            break;
        }

    }while(sair == 0);
};
void scap (char* a){
    int i;
    strupr(a);
    for (i=0; a[i] != '\0'; i++){
        printf("%c\n", a[i]);
    }
  };
int cont(char* str, char c){

    int i=0,contador=0;
    for(i; str[i]!='\0'; i++){
        if (str[i]==c) {
            contador++;
        }
    }
return contador;
};
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
};
