#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int linha,coluna,i,j;
    printf("quantos alunos deseja cadastrar: ");
    scanf("%d", &linha);
    printf("quantas notas deseja registrar: ");
    scanf("%d", &coluna);
    coluna++;
    float notas[linha][coluna];
    float soma=0;

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna-1; j++)
        {
            printf("Digite a %dº nota do aluno %dº: ", j+1, i+1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        notas[i][coluna-1] = soma/(coluna-1);
        soma = 0;
    }
    for (i = 0; i < linha; i++)
    {
        printf("Notas do aluno %dº: ", i+1);
        for (j = 0; j < coluna; j++)
        {
        	if(j == coluna-1){
        		printf(" Média: %.2f", notas[i][j]);	
			} else{
	        	printf("| %.2f | ", notas[i][j]);
	    	}
		}
        puts("");
    }
    return 0;
}
