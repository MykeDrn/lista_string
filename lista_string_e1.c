#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    char n[160];
    printf("Frase: ");
    gets(n);
    printf("quantidade de caracteres da frase: %d", strlen(n));

}
