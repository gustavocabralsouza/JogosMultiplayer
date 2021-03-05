#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include <locale>

int main() {
	
	char tam_palavra,palavra[25],letra[25],lacuna[25]="_";
	int vida=10,x,i,pontos=0,resp;
	system("COLOR FC");
	setlocale (LC_ALL, "portuguese");
	printf("BEM VINDO(A) !!!! \n Hoje iremos Jogar o famoso jogo da forca\n Mas primeiramente precisaremos de duas pessoas !! \n");
	printf("PEÇA PARA SEU AMIGO(A) FECHAR SEUS OLHOS !! \n");
	system("COLOR FC");
	
	printf("\n\nDigite a palavra secreta:\n\n");
	gets(palavra);
	system("cls");
	printf(" INSTRUÇÃO !! \n\nFale  uma dica para facilitar o seu oponente ! \n");
	
	for(i=0;i<strlen(palavra);i++)
	lacuna[i]='-';
	tam_palavra=strlen(palavra);
	
	while(vida>0) {
		x=0;
		printf("\n %s \n",lacuna);
		printf("\n digite uma letra: \n ");
		gets(letra);
		
		for(i=0;i<strlen(palavra);i++) {
			if(letra[0]==palavra[i]) {
				lacuna[i]=palavra[i];
				pontos++;
				x++;
			}
		}
		
		if(x==0) {
			vida=vida-1;
			
			if(vida==0) {
				system("COLOR FD");
			
				printf("\n\n VOCÊ FOI ENFORCADO!");
				printf("\n A PALAVRA ERA: %s",palavra);
				break;
			}
			
			else
			printf("\n VOCE ERROU! RESTAM %d VIDA(S)",vida); 
		}
		
		else{
			if(pontos==tam_palavra) {
				printf("\n\n VOCE GANHOU!");
				printf("\n A PALAVRA É: %s",palavra);
				break;
			}
			
			else {
				system("COLOR BC");
				printf("\n VOCE ACERTOU UMA LETRA!");
			}
		}
	} 
	
	printf("\n\n");
	system("pause");
	return 0; 
}
