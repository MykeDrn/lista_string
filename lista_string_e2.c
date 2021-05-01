#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void split(){

    char n[160];
    char *split;
    printf("Frase: ");
    gets(n);
    system("cls");
    split = strtok(n," ");
    while(n != NULL){
        printf("%s\n",split);
        split=strtok(NULL," ");
  }
};

int main(){
    split();
}
