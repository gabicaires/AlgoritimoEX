/*Calcular a média simples de duas notas.
Verificar: se for a nota for maior igual a 9.5 => Parabens!! Aprovado! Tuts tuts
Caso contrario => Tente novamente!! Reprovado! Buaa buaa*/

 
#include<stdio.h>

int main(){
	float nota1, nota2, mp;
	printf("Digite da primeira nota: ");
	scanf("&f", &nota1);
	printf("Digite da segunda nota: ");
	scanf("&f", &nota2);
	
	mp = (nota1 + nota2)/2;
	
	printf ("mp = %f", mp);
	
	if (mp >= 9.5)
	printf("Parabens!! Aprovado! Tuts tuts");
	else printf("Tente novamente!! Reprovado! Buaa buaa");
}
