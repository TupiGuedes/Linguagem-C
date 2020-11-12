#include<stdio.h>

main()
{
	int i=1, m, limit, ida;
	
	printf("Digite o limite de alunos \n");
	scanf("%d", &limit);
	
	while (i <= limit)
	{
		printf("Digite sua idade \n");
		scanf("%d", &ida);
	
		ida = ida + i;
		m = ida / limit;	
		i++;
	}
	
	printf("Valor da media: %d", m);
}
