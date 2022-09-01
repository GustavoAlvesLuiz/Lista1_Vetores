#include <stdio.h>
#include "vetlib.h"

int main(){
	int qtd, vet[100], soma;
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d",&qtd);
	printf("Digite os valores para o vetor: ");
	leiaVetor(vet,qtd);
	printVet(vet,qtd);
	soma = somaVet(vet,qtd);
	printf("Soma dos elementos do vetor: %d",soma);
	return 0;
}
