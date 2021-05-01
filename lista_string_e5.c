#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cont(char* str, char c);

int main(){
char frase[100];
char c;
printf("frase: ");
gets(frase);
printf("\ncaractere: ");
scanf("%c",&c);
system("cls");

printf("o caractere '%c' aparece %d vezes na frase",c, cont(frase,c));

}
int cont(char* str, char c){

    int i=0,contador=0;
    for(i; str[i]!='\0'; i++){
        if (str[i]==c) {
            contador++;
        }
    }
return contador;
}
