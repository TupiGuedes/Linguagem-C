#include<stdio.h>

main()
{
	float n1, prest;
	
	printf("Digite o valor da compra \nR$");
	scanf("%f", &n1);
	
	prest = n1 / 5;
	
	printf("O valor das prestações: %.2f", prest);
}
