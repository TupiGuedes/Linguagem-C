#include<stdio.h>

main() 
{
	int n1, n2, s;
	
	printf("Digite o primeiro valor \n");
	scanf("%d", &n1);
	
	printf("Digite o segundo valor \n");
	scanf("%d", &n2);
	
	s = n1 + n2;
	
	printf("A soma entre %d + %d = %d", n1, n2, s);

	printf("\n");	
	system("pause"); 	
}
