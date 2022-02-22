#include<stdio.h>

int main(){
	double area, raio;
	
	printf("Qual o raio: ");
	scanf("%lf", &raio);
	
	area = raio * raio * 3,14159;
	
	printf("Area: %.4lf", area);
	
}
