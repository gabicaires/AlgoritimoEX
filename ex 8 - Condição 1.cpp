/*leia 2 valores inteiros  A e B.
A seguir, se A for maior do que B, imprima "Valores aceito".
Caso n�o. imprima "Valores n�o aceiros".
a=22, b=18*/

#include<stdio.h>

int main(){
	int a, b;
	printf("Digite o valor a: ");
	scanf("%d", &a);
	printf("Digite o valor b: ");
	scanf("%d", &b);
	
	if (a > b)//if representa condi��o verdadeira ou falsa. PS: if n�o tem ";"
	printf("Valores aceitos");//condi��o verdadeira
	else printf("Valores n�o aceitos");// condi��o falsa
	
} 
