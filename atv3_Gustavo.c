#include <stdio.h>
#include "vetlib.h"

int main(){
	int vet[100], qtd, menor;
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d",&qtd);
	printf("Digite os valores para o vetor: ");
	leiaVetor(vet,qtd);
	printVet(vet,qtd);
	menor = menorVet(vet, qtd);
	printf("Menor valor do vetor: %d",menor);
	
}
