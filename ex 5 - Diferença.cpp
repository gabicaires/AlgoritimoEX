#include<stdio.h>

int main(){
int a, b, c, d, dif;
printf("Digite o primeiro numero: ");
scanf("%d", &a);
printf("Digite o segundo numero: ");
scanf("%d", &b);
printf("Digite o terceiro numero: ");
scanf("%d", &c);
printf("Digite o quarto numero: ");
scanf("%d", &d);

dif = (a * b)-(c * d);

printf("A diferença dos produtos = %d", dif);
}

