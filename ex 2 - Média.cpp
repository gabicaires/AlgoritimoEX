/*Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5*/

#include<stdio.h>

int main(){
	double a, b, mp;
	printf("Digite o primeiro numero: ");
	scanf("%lf", &a);
	printf("Digite o segundo numero: ");
	scanf("%lf", &b);
	
	mp = ((a*3.5)+(b*7.5))/11;
	
	
	printf("mp = %.5lf", mp);
	
}
