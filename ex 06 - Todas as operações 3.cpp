#include<stdio.h>

int main(){//inicio do algoritimo nao muda em hipotese alguma
	double a, b;
	printf("Digite o primeiro numero: ");
	scanf("%lf", &a);
	printf("Digite o segunrdo numero: ");
	scanf("%lf", &b);


	printf("O resultado da soma = %.2lf\n", a + b);
	
	printf("O resultado da diferença = %.2lf\n",  a - b);

	printf("O resultado do produto = %.2lf\n",  a * b);

	printf("O resultado da divisão = %.2lf\n",  a / b);

}
