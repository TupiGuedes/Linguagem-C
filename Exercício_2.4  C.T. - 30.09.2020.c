#include<stdio.h>

main()
{
	int n1, n2, mult1, mult2;
	
	
	printf("Digite o primeiro valor \n")
	scanf("%d", &n1);
	printf("Digite o segundo valor \n");
	scanf("%d", &n2);
	
	mult1 = n1 * 4;
	mult2 = n2 * 3;
	
	printf("%d x 4 vale: %d", n1, mult1);
	printf("%d x 3 vale: %d", n2, mult2);
}
