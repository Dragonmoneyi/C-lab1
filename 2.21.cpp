//Идет n-ая секунда суток. Определить, сколько полных часов и полных минут прошло к этому моменту.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
    	int s,m,h; printf("Vvod sec -> "); 
	scanf("%i",&s);
    	m=s/60; h=s/3600;
    	printf("Полных часов:%i\nПолных минут:%i",h,m);
   	printf("\nВремени прошло:%i:%i:%i",h,m%60,s%60); 
    	return 0;
}