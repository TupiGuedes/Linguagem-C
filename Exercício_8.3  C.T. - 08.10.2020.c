#include<stdio.h>

main()
{
	int tot_aluno, i, c=0, ida=0;
	float m;
	
	
	printf("Digite o total de alunos \n");
	scanf("%d", &tot_aluno);
	
	for (i=1; i <= tot_aluno; i++)
	{	
		printf("Digite sua idade \n");
		scanf("%d", &ida);
		
		c = c + ida;
		m = c / tot_aluno;
	} 
	printf("Media das idades: %.2f \n", m);
}

