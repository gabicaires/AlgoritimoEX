/*
0 - 10 anos -> criança
11 - 18 anos -> adolescente
19 - 60 anos -> adulto
61 - 100 anos -> idoso
101 - 150 anos -> zumbi
acima de 150 -> idade invalida*/

#include<stdio.h>

int main(){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if (idade>=0 && idade<=10)
	 printf("Criança\n");
	 else if (idade>=11 && idade<=18)
		 printf("Adolescente\n");
		else if (idade>=19 && idade<=60)
	 		printf("Adulto\n");
			else if (idade>=61 && idade<=100)
	 			printf("Idoso\n");
				else if (idade>=101 && idade<=150)
	 				printf("Zumbi\n");
	 				else printf("Idade invalida");
	 
	 
}
