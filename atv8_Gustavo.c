#include <stdio.h>
#include <string.h>

int main(){
	
	char palavra[100];
	int tamanho,i;
	printf("Insira a palavra: ");
	gets(palavra);
	tamanho = strlen(palavra);
	printf("A palavra possui %d letras",tamanho);
	printf("\nPalavra inserida ao contrario: ");
	for(i = 0; i < tamanho; i++){
		printf("%c", palavra[tamanho-1-i]);
	}
}
