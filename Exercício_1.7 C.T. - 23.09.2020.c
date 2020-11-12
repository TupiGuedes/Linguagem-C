#include<stdio.h>

main()
{
	int n1, dobro, triplo;
	
	printf("Digite um valor \n");
	scanf("%d", &n1);
	
	dobro = n1 * 2;
	triplo = n1 * 3;
	
	printf("O dobro de %d: %d \n", n1, dobro);
	printf("O triplo de %d: %d \n", n1, triplo);
}
