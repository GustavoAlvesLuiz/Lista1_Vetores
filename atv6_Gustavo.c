#include <stdio.h>
#include "vetlib.h"

int sorteio(int v[], int n, int x){
	int i, certo = 0;
	for(i = 0; i < n; i++){
		if(x == v[i]){
			certo = 1;
			return certo;
		}
	}
	return certo;
}
//----------------------------------------------------------------
int main(){
	int num, adv, vet[100];
	printf("Digite a quantidade de numeros para o sorteio: ");
	scanf("%d", &num);
	geraVet(vet, num);
	
	printf("\n Digite um numero: ");
	scanf("%d", &adv);
	if(sorteio(vet, num, adv) == 1){
		printf("O numero %d esta no vetor!\n", adv);
		printVet(vet, num);
	}
	else{
		printf("O numero %d nao esta no vetor!\n", adv);
		printVet(vet, num);
	}
	return 0;
}
