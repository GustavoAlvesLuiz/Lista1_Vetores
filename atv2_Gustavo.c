#include <stdio.h>
#include "vetlib.h"

int main(){
	int vet[100], qtd, maior;
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d",&qtd);
	printf("Digite os valores para o vetor: ");
	leiaVetor(vet,qtd);
	printVet(vet,qtd);
	maior = maiorVet(vet,qtd);
	printf("Maior valor do vetor: %d",maior);
	
}
