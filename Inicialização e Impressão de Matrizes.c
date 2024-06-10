//Escreva um programa que inicialize uma
//matriz 3x3 com valores inteiros de 1 a 9 e, em
//seguida, imprima a matriz.

#include <stdio.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int matriz[3][3] = {1,2,3,4,5,6,7,8,9};
	int i,j;
	
	for(i=0; i<3;i++){
		for(j=0; j<3;j++){
			printf("| %d | ", matriz[i][j]);
		}
		puts("");
	}
		
	return 0;
}
