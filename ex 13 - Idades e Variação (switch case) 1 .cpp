#include<stdio.h>

int main(void){
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
switch(idade){

	case 0 ... 10: printf("Criança\n"); break;
	case 11 ... 18: printf("Adolescente\n"); break;
	case 19 ... 60: printf("Adulto\n"); break;
	case 61 ... 100: printf("Idoso\n"); break;
	case 101 ... 150: printf("Zumbi\n"); break;
		
	default: printf("Idade invalida\n");
}
}
