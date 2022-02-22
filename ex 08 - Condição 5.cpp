/*Leia 4 valores inteiros A, B, C e D. 
1- B for maior do que C 
2- D for maior do que A
3-Soma de C com D for maior que a soma de A e B 
4- C é positivo
5- D é positivo
Escreva a mensagem “Valores aceitos” . 
Caso contrário, escreva a mensagem “Valores não aceitos”.
*/
//6- A é par


#include<stdio.h>

int main(){
	int a, b, c, d;
	printf("Digite o valor a: ");
	scanf("%d", &a);
	printf("Digite o valor b: ");
	scanf("%d", &b);
	printf("Digite o valor c: ");
	scanf("%d", &c);
	printf("Digite o valor d: ");
	scanf("%d", &d);
	
	if (b>c && d>a && (c+d)>(a+b) && c>0 && d>0 && a%2==0)
	printf("Valores Aceitos");
	else printf("Valores não aceitos");
}
