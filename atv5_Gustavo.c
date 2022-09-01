#include <stdio.h>
#include <string.h>
int main(){
	char dna[50], complementar[50];
	int i, n;
	printf("Entre com sequencia dna: ");
	gets(dna);
	strupr(dna);
	printf("%s\n",dna);
	n = strlen(dna);
	for(i=0;i<n;i++){
	
	if(dna[i] == 'C'){
		complementar[i] = 'G';
		
		}
		else if(dna[i] == 'A'){
		complementar[i] = 'T';
		}
		else if(dna[i] == 'T'){
		complementar[i] = 'A';
		}
		else if(dna[i] == 'G'){
		complementar[i] = 'C';
}
printf("%c-",complementar[i]);
}
}
