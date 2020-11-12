#include<stdio.h>

main()
{
	int ano_natal, ano_atual, idade;
	
	printf("Digite o ano de nascimento \n");
	scanf("%d", &ano_natal);
	printf("Digite o ano atual \n");
	scanf("%d", &ano_atual);
	
	idade = ano_atual - ano_natal;
	
	printf("Sua idade: %d", idade);
}
