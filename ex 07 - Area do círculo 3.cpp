#include<stdio.h>
#include<math.h>

#define PI 3.14159 //contantes da biblioteca, ou seja, todos as variaveis teram um valor definido.

int main(){
	double area, raio;
	
	printf("Qual o raio: ");
	scanf("%lf", &raio);

	
	area = pow(raio,3500) * PI;
	
	printf("Area: %lf", area);
}
