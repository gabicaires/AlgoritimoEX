/*leia 2 valores inteiros  A e B.
A seguir, se A for maior do que B, imprima "Valores aceito".
Caso não. imprima "Valores não aceiros".
a=22, b=18*/

#include<stdio.h>

int main(){
	int a, b;
	printf("Digite o valor a: ");
	scanf("%d", &a);
	printf("Digite o valor b: ");
	scanf("%d", &b);
	
	if (a > b)//if representa condição verdadeira ou falsa. PS: if não tem ";"
	printf("Valores aceitos");//condição verdadeira
	else printf("Valores não aceitos");// condição falsa
	
} 
