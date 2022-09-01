#include <stdio.h>
#include "vetlib.h"

int main(){
	
	int num, face = 0,i,j,vet[100];
	printf("Digite o numero de lancamentos do dado: ");
	scanf("%d", &num);
	printf("Digite o resultado do lancamento do dado: ");
	leiaVetor(vet,num);
	printVet(vet, num);
	for(i = 1; i <= 6; i++){
		for(j = 0; j < num; j++){
			if(vet[j] == i){
				face++;
			}
		}
		printf("\nO lado [%d] aparece %d vez(es).\n", i, face);
		face = 0;
	}
	return 0;
}
