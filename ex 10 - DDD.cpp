#include<stdio.h>

int main(){
	int ddd;
	printf("Digite um DDD: ");
	scanf("%d", &ddd);
	
	if(ddd==61)
	printf("Brasilia\n");
	else if(ddd==11)// Coloca-se o if dentro do else para que abra-se uma janela de opções.
		printf("São Paulo\n");
		else if(ddd==21)
			printf("Rio de Janeiro\n");
			else if(ddd==32)
				printf("Juiz de Fora\n");
				else if(ddd==19)
					printf("Campinas\n");
					else if(ddd==27)
						printf("Vitoria\n");
						else if(ddd==31)
							printf("Belo Horizonte\n");
							else if(ddd==71)
								printf("Salvador\n");
								else printf("DDD não encontrado"); 

	
}
