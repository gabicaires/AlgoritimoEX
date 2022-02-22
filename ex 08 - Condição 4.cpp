/*Nota >= 9.5, Frequencia >=9.5 */

#include<stdio.h>

int main(){
	float nota1, nota2, media;
	int  freq, github;
	printf("Digite da primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite da segunda nota: ");
	scanf("%f", &nota2);
	printf("Digite sua frequencia: ");
	scanf("%d", &freq);
	printf("Digite seu github: ");
	scanf("%d", &github);
	
	media = (nota1 + nota2)/2;
	
	printf ("A sua media é: %.1f", media);
	
	if (media >= 9.5 && freq >= 75 && github == 1)
	printf("Parabens!! Aprovado! Tuts tuts");
	else printf("\nTente novamente!! Reprovado! Buaa buaa");
}
