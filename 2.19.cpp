//Целой переменной k присвоить значение, равное первой цифре дробной части в записи вещественного положительного числа x.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
	double x;
	int k;
	printf("Vvod x -> "); 
	scanf("%lf",&x);
	k=x*10; k%=10; 
	printf("k = %i",k); 
	return 0;
}