#include<stdio.h>

int main(){//inicio do algoritimo nao muda em hipotese alguma
	double a, b, soma, dif, prod, div;
	printf("Digite o primeiro numero: ");
	scanf("%lf", &a);
	printf("Digite o segunrdo numero: ");
	scanf("%lf", &b);

	soma = a + b;
	printf("O resultado da soma = %.2lf\n", soma);//.2 antes do %lf para ter apenas 2 casa após a virgula
	dif = a - b;
	printf("O resultado da diferença = %.2lf\n", dif);//\n para pular linha após o %lf
	prod = a * b;
	printf("O resultado do produto = %.2lf\n", prod);
	div = a / b;
	printf("O resultado da divisão = %.2lf\n", div);

}
