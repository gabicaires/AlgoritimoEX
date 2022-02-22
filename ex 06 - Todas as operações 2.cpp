#include<stdio.h>

int main(){//inicio do algoritimo nao muda em hipotese alguma
	double a, b, soma, dif, prod, div;
	printf("Digite o primeiro numero: ");
	scanf("%lf", &a);
	printf("Digite o segunrdo numero: ");
	scanf("%lf", &b);

	soma = a + b;
	
	dif = a - b;
	
	prod = a * b;
	
	div = a / b;
	
printf("O resultado da soma = %.2lf\n", soma, "O resultado da diferença = %.2lf\n", dif, "O resultado do produto = %.2lf\n", prod, "O resultado da divisão = %.2lf\n", div);

printf("O resultado da soma = %.2lf\n", soma);
printf("O resultado da diferença = %.2lf\n", dif);
printf("O resultado do produto = %.2lf\n", prod);
printf("O resultado da divisão = %.2lf\n", div);
}
