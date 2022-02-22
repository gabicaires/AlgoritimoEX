#include<stdio.h>
#include<math.h>

#define PI 3.14159 //contantes da biblioteca, ou seja, todos as variaveis teram um valor definido.

int main(){
	double area, raio;
	
	printf("Qual o raio: ");
	scanf("%lf", &raio);
	
	area = raio * raio * 3.14159;// pow(base, expoente)
		
	area = pow(raio,3500) * 3.14159;
	
	area = pow(raio,3500) * PI;
	
	printf("Area: %lf", area);
}
