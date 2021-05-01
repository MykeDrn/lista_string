#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char a[50], buff[50];
    int i, j;

    printf("Frase: ");
    gets(a);

    j=strlen(a)-1;
    for(i=0; a[i] !='\0'; i++){
        buff[j]=a[i];
        j--;
    }
    buff[i]='\0';
	strcpy(a,buff);
	printf("Frase invertida: %s", a);
}
