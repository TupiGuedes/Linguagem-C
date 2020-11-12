#include<stdio.h>

main()
{
	int n1, sucess;
	
	printf("Digite o primeiro valor \n");
	scanf("%d", &n1);
	
	sucess = n1 + 1;
	
	printf("O sucessor de %d = %d", n1, sucess);
	
	printf("\n");
	system("pause");
}
