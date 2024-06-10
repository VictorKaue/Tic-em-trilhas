//Escreva um programa que leia duas matrizes
//2x2 do usuário, calcule a soma das duas
//matrizes e imprima o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 2
int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[N][N];
	int matriz2[N][N];
	int i,j;
	printf("Matriz1:\n");
	for(i=0; i<N;i++){
		for(j=0; j<N;j++){
			printf("Digite o valor da %dº linha e %dº coluna: ", i+1, j+1);
			scanf("%d",&matriz[i][j]);
			fflush(stdin);
		}
	}
	printf("\nMatriz2:\n");
	for(i=0; i<N;i++){
		for(j=0; j<N;j++){
			printf("Digite o valor da %dº linha e %dº coluna: ", i+1, j+1);
			scanf("%d",&matriz2[i][j]);
			fflush(stdin);
		}
	}

	
	for(i=0; i<N;i++){
		for(j=0; j<N;j++){
			printf("| %d | ", matriz[i][j] * matriz2[i][j]);
		}
		puts("");
	}
	
	return 0;
}
