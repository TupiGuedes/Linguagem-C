#include<stdio.h>

main()
{
	int n1, n2, n3;
	float media;
	
	printf("Digite o primeiro valor \n");
	scanf("%d", &n1);
	
	printf("Digite o segundo valor \n");
	scanf("%d", &n2);
	
	printf("Digite o terceiro valor \n");
	scanf("%d", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("A média dos valores: %.2f", media);
	
	printf("\n");
	system("pause"); 
}
