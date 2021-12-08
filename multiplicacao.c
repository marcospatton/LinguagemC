#include<stdio.h>

int main(){
	
	int valorX;
	int valorY;
	int resultado;

	printf("Digite o valor de x: \n:");
	
	scanf("%d", &valorX);

	printf("Digite o valor de y: \n:");

	scanf("%d", &valorY);

	resultado = (valorX * valorY);

	printf("A Multiplicacao e %d", resultado);


}