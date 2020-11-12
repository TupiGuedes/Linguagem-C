#include<stdio.h>

main()
{
	int c, f;
	
	printf("Digite a tempertura em C \n");
	scanf("%d", &c);	
	
	f = (9 * c + 160) / 5; 
	
	printf("A temperatura em Celsius: %d C \nA temperatura em Fahrenheit: %d F", c, f);
}
