#include<stdio.h>

main()
{
	int n1, n2, s, sub, mult;
	float div;
	
	printf("Digite o primeiro valor \n");
	scanf("%d", &n1);
	printf("Digite o segundo valor \n");
	scanf("%d", &n2);
	
	s = n1 + n2;
	sub = n1 - n2;
	mult = n1 * n2;
	div = n1 / n2;
	
	printf("A soma entre %d + %d = %d\n", n1, n2, s);
	printf("A subtração entre %d - %d = %d\n", n1, n2, sub);
	printf("A multiplicação entre %d x %d = %d\n", n1, n2, mult);
	printf("A divisão entre %d : %d = %.2f", n1, n2, div);
	
	printf("\n");
	system("pause");
}
