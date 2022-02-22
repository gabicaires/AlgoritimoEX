/* ex 1036
Bhaskara - 2 coisas.
Delta ser negativo ou = 0*/

#include<stdio.h>
#include<math.h>

int main(){
double a, b, c, delta, r1, r2;
printf("Digite o valor de A: ");
scanf("%lf", &a);
printf("Digite o valor de B: ");
scanf("%lf", &b);
printf("Digite o valor de C: ");
scanf("%lf", &c);

delta = (b*b) - (4*a*c);
 
 if(delta <= 0 || delta == 0)
 	printf("Impossivel calcular\n");
	r1 = ((-b) - sqrt(delta)) / (2*a);
	printf("R1= %.5lf\n", r1);

	r2 = ((-b) + sqrt(delta)) / (2*a);
	printf("R2= %.5lf\n", r2);

	
}








