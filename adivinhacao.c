#include<stdio.h>

int main(){

	//Imprime cabecalho do nosso jogo
	printf("***************************************\n");
	printf("Bem vindo ao nosso jogo de adivinhacao \n");
	printf("***************************************\n");

	int numerosecreto = 42;

	int chute;

	printf("Qual e o seu chute ? ");
	scanf("%d", &chute);
	printf("Seu chute foi %d\n", chute);

	if(chute == numerosecreto){
		printf("Parabens! Voce acertou!\n");
		printf("Jogue de novo, voce e um bom jogador!\n");
	}
	else{

		if(chute > numerosecreto){
			printf("Seu chute foi maior que o numero secreto\n");
		}

			if(chute < numerosecreto){
				printf("Seu chute foi menor que o numerosecreto\n");
			}
			printf("Voce errou!\n");
			printf("Mas nao desanime, tente de novo!\n");
	}
}	
