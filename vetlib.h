#include <stdio.h>
#include <stdlib.h>
void geraVet(int v[], int n){
	int i;
	srand(time(NULL)); // inicializa gerador
	for(i=0;i<n;i++)
		v[i]=rand()%20; 
}
//---------------------
void leiaVetor(int v[],int n){
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);
}
//--------------------
void printVet(int v[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d |",v[i]);
	printf("\n");	
}
//----------------------
int somaVet(int v[], int n){
	int i,soma=0;
	for(i=0;i<n;i++)
		soma+=v[i];
	return soma;	
}
//---------------------------
int maiorVet(int v[], int n){
	int i, maior = v[0];
	for(i=1;i<n;i++){
		if(v[i]> maior)
			maior = v[i];
	}// fim for		
	return maior;		
}
//---------------------------
int existe(int x,int v[], int n){
	int cont=0,i;
	for(i=0;i<n;i++)
		if(v[i]==x)
			cont++;
	return cont;
}
//------------------------------
int menorVet(int v[], int n){
	int i, menor = v[0];
	for(i=1;i<n;i++){
		if(v[i]< menor)
			menor = v[i];
	}// fim for		
	return menor;		
}
//--------------------------------
int contImpar(int v[], int n){
	int i,impar = 0;
	for(i=0;i<n;i++){
		if(v[i] %2 !=0)
			impar++;
	}
	return impar;
}
//---------------------------------------
float leiaVetorfloat(float v[], int n){
	float x;
	int i;
	for(i = 0; i < n; i++){
		printf("Valor[%d]: ", i);
		scanf("%f", &x);
		v[i] = x;
	}
}
//-------------------------------------
float maiorValorfloat(float v[], int n){
	float maior = v[0];
	int i;
	for(i = 1; i < n; i++){
		if(v[i] > maior){
			maior = v[i];
		}
	}
	return maior;
}
//-------------------------------------
float menorValorfloat(float v[], int n){
	float menor = v[0];
	int i;
	for(i = 1; i < n; i++){
		if(v[i] < menor){
			menor = v[i];
		}
	}
	return menor;
}
//-------------------------------------
float somaVetorfloat(float v[], int n){
	float soma = 0;
	int i;
	for(i = 0; i < n; i++){
		soma += v[i];
	}	
	return soma;
}
//-------------------------------------
