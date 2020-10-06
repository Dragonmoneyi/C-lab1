//Определить число, полученное выписыванием в обратном порядке цифр заданного целого трехзначного числа.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
	int x; printf("Vvod x -> "); 
	scanf("%i",&x);
	printf("invert x = %i",x/100+x/10%10*10+x%10*100); 
	return 0;
}