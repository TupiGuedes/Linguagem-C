#include<stdio.h>

main()
{
	int n1;
	
	printf("Digite um valor entre 100 e 200 \n");
	scanf("%d", &n1);
	
	if (n1 > 100 && n1 < 200)
	{
		printf("%d -> esta dentro do intervalo", n1);
	}
	else 
	{
		printf("%d -> esta fora do intervalo", n1);
	}
}


