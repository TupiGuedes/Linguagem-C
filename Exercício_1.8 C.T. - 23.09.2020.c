#include<stdio.h>

main()
{
	int n1, cubo;
	
	printf("Digite um número \n");
	scanf("%d", &n1);
	
	cubo = n1 * n1 * n1;
	
	printf("O cubo de %d: %d", n1, cubo);
}
