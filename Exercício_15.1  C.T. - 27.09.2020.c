#include<stdio.h>

main()
{
	int i, n[i], soma=0, c=0, v_maior;
	
	float m;
	
	for (i=0; i<5; i++)
	{
		printf("Digite um número \n");
		scanf("%d", &n[i]);
	}
	
	for (i=0; i<5; i++)
	{
		if (n[i] >= 10 && n[i] <= 150)
			{	
				c++; 
				
				soma = soma + n[i];
			}
	}
	
	m = soma / c;
	
	printf("\nA media do intervalo entre 10 e 150: %f", m);
}

