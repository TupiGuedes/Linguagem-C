#include<stdio.h>

main()
{
	int i, c, ini, fim;
	
	printf("Digite o inicio do intervalo \n");
	scanf("%d", &ini);
	printf("Digite o fim do intervalo \n");
	scanf("%d", &fim);
	
	for (i=ini; i<fim; i = i + 1)
	{
		c = c + i;
	}
	printf("A soma do intervalo entre %d e %d = %d", ini, fim, c);
}
