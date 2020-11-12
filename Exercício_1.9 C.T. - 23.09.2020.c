#include<stdio.h>

main()
{
	float n1, desc, v_final;
	
	printf("Digite o valor do produto \nR$");
	scanf("%f", &n1);
	
	desc = (n1 * 10) / 100;
	v_final = n1 - desc;
	
	printf("O valor com o desconto: %.2f", v_final);
}
