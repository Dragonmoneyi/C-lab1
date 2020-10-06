//Целой переменной k присвоить значение, равное сумме цифр в записи целого положительного трехзначного числа x.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int x,k; 
	printf("Vvod x -> ");
	scanf("%i",&x);
	k=x/100%10+x/10%10+x%10; 
	printf("k = %i",k); 
	return 0;
}