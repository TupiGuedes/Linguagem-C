#include<stdio.h>

main()
{
	int esc, h_trab;
	float s_final;
	
	printf("Digite a quantidade de horas trabalhadas \n");
	scanf("%d", &h_trab);
	printf("Digite 1: n�vel 1 \nDigite 2: n�vel 2 \nDigite 3: n�vel 3 \nDigite sua escolha \n");
	scanf("%d", &esc);
	
	switch(esc)
	{
		case 1:
			s_final = 20 * h_trab;
		case 2:
			s_final = 25 * h_trab;
		default:
			s_final = 30 * h_trab;
	}
	printf("Sal�rio atual %.2f", s_final);
}
