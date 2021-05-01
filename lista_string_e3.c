#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void scap (char a[160]);
int main(){

    char n[160];
    printf("Frase: ");
    gets(n);
    scap(n);

}

void scap (char a[160]){

    int i;
    strupr(a);
    for (i=0; a[i] != '\0'; i++){
        printf("%c\n", a[i]);
    }
  };
