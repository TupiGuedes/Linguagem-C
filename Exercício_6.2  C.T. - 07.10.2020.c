#include<stdio.h>

main()
{
	int esc, h_trab;
	float s_final;
	
	printf("Digite a quantidade de horas trabalhadas \n");
	scanf("%d", &h_trab);
	printf("Digite 1: nível 1 \nDigite 2: nível 2 \nDigite 3: nível 3 \nDigite sua escolha \n");
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
	printf("Salário atual %.2f", s_final);
}
