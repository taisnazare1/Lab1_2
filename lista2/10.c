/*Escreva o menu de op��es abaixo, leia a op��o do usu�rio e execute a opera��o
escolhida Escreva uma mensagem de erro se a op��o escolhida for invalida.
1- Soma de 2 n�meros.
2- Diferen�a entre 2 n�meros (maior pelo menor).
3- Produto entre 2 n�meros.
4- Divis�o entre 2 n�meros (o denominador n�o pode ser zero).*/

#include<stdio.h>
int menu (int opcao){
	switch (opcao){
		int x,y;
		case 1:	
			printf("Digite dois numeros inteiros\n");
			scanf("%d%d",&x,&y);
			printf("A Soma de 2 numeros : %d ",(x+y));
			break;
		case 2:
			if (x>y){
				printf("Digite dois numeros inteiros\n");
				scanf("%d%d",&x,&y);
				printf("Diferen�a entre 2 n�meros %d: ",(x-y)); 
				break;
			}
			else {
				printf("Digite dois numeros inteiros\n");
				scanf("%d%d",&x,&y);
				printf("Diferen�a entre 2 n�meros %d: ",(y-x)); 
			break;
		case 3:
			printf("Digite dois numeros inteiros\n");
			scanf("%d%d",&x,&y);
			printf("Produto entre 2 n�meros: %d ",(x*y));
			break;
		case 4:
		if (y!=0){		
			printf("Digite dois numeros inteiros\n");
			scanf("%d%d",&x,&y);
			printf("Divis�o entre 2 n�meros: %d ",(x/y));
			break;	
		}
		else{
			printf("Divis�o impossivel ");	
			break;
		}
	}
}
}
int main(){
	int OPCAO;
	printf("		MENU\n1- Soma de 2 numeros\n2- Diferenca entre 2 numeros\n3- Produto entre 2 numeros\n4- Divisao entre 2 numeros\n-> ");
	scanf("%d",&OPCAO);
	menu(OPCAO);
}
	

