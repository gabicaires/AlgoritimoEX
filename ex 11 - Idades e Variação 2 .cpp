/* 
10 anos -> criança
18 anos -> adolescente
60 anos -> adulto
100 anos -> idoso
150 anos -> zumbi
acima de 150 -> idade invalida*/

#include<stdio.h>

int main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade == 10)
	 printf("Criança\n");
	 else if (idade == 18)
		 printf("Adolescente\n");
		else if (idade == 60)
	 		printf("Adulto\n");
			else if (idade == 100)
	 			printf("Idoso\n");
				else if (idade == 150)
	 				printf("Zumbi\n");
	 				else printf("Idade invalida");
	 
	 
}
