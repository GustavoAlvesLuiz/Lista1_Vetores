#include <stdio.h>
#include "vetlib.h"

int main(){
	int vet[100], qtd, impar;
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d",&qtd);
	geraVet(vet,qtd);
	//printf("Digite os valores para o vetor: ");
	//leiaVetor(vet,qtd);
	printVet(vet,qtd);
	impar = contImpar(vet,qtd);
	printf("Numeros impares no vetor: %d",impar);
	return 0;
}
