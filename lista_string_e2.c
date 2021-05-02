#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void separar(char* a){
    char *separar;
    separar = strtok(a," ");
    while(a != '\0'){
        printf("%s\n",separar);
        separar=strtok('\0'," ");
  }
};

int main(){
    char n[160];
    printf("Frase: ");
    fflush(stdin);
    gets(n);
    system("cls");
    separar(n);
}
