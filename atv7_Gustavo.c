#include <stdio.h>
#include "vetlib.h"

int main(){
	
	int vet1[100], vet2[100], vetMult[100], num, i;
	printf("Insira a quantidade de elementos a serem multiplicados: ");
	scanf("%d", &num);
	geraVet(vet1, num);
	geraVet(vet2, num);
	for(i = 0; i < num; i++){
		vetMult[i] = vet1[i] * vet2[i];
	}
	printf("Elementos do vetor 1: ");
	printVet(vet1, num);
	printf("\nElementos do vetor 2: ");
	printVet(vet2, num);
	printf("\nElementos multiplicados: ");
	printVet(vetMult, num);
	return 0;
}

