/*9� Receber o sal�rio de um trabalhador e o valor da presta��o de um empr�stimo, se a
presta��o for maior que 20% do sal�rio imprima: �Empr�stimo n�o concedido�, caso
contrario imprima: �Empr�stimo Concedido�*/
# include <stdio.h>
float emprestimo(float SALARIO, float PRESTACAO){
	if ((PRESTACAO)>(SALARIO*0.20)){
		printf("Emprestimo Nao Concedido");
	}
	else 
		printf("Emprestimo Concebido");
}
int main(){
	float salario,prestacao;
	printf("Digite o valor do seu salario :");
	scanf("%f",&salario);
	printf("Digite o valor da prestacao do Emprestimo : ");
	scanf("%f",&prestacao);
	emprestimo(salario,prestacao);
}

