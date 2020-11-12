#include<stdio.h>

main()
{
	int a, b, c;
	
	printf("Digite o valor de A \n");
	scanf("%d", &a);
	printf("Digite o valor de B \n");
	scanf("%d", &b);
	
	c = a;
	a = b;
	b = c;
	
	printf("O valor de A agora: %d \nO valor de B agora: %d", a, b);
}
