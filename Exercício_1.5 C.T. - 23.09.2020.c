#include<stdio.h>

main()
{
	float sal_fixo, tot_vend, comsao, sal_final;
	
	printf("Digite seu sal�rio fixo \nR$");
	scanf("%f", &sal_fixo);
	printf("Digite o total de vendas \nR$");
	scanf("%f", &tot_vend);
	
	comsao = (tot_vend * 15) / 100;
	sal_final = comsao + sal_fixo;
	  
	printf("O sal�rio fixo: %.2f \n", sal_fixo);
	printf("O sal�rio final com a comisao: %.2f", sal_final);
}
