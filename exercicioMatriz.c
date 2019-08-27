#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int matrizA [3][4];
	int matrizB [3][4];
	//int i = 0;
	
	printf("--- Informe os Dados da Matriz A ---\n");
	for(int i = 0; i <3; i++){
		for(int j = 0; j <4; j++){
			printf("\nNumero[%d][%d]:", i+1, j+1);
			scanf("%i", &matrizA[i][j]);
		}
	}
	
		printf("--- Informe os Dados da Matriz B ---\n");
	for(int i = 0; i <3; i++){
		for(int j = 0; j <4; j++){
			printf("\nNumero[%d][%d]:", i+1, j+1);
			scanf("%i", &matrizB[i][j]);
		}
	}

	printf("--- Exibindo os dados da matriz A*B ---");
	for(int i = 0; i <3; i++){
		for(int j = 0; j <4; j++){
			printf("\nNumero[%d][%d]:", i+1, j+1);
			printf("%i", matrizA[i][j] * matrizB[i][j]);
		}
	}
}
