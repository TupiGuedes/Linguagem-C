#include<stdio.h>

main()
{
	int esc;
	
	printf("Digite 1: Cat \nDigite 2: Dog \nDigite 3: Book \nDigite 4: Table \nDigite 5: Fish \nDigite sua escolha \n");
	scanf("%d", &esc);
	
	switch(esc)
	{
		case 1:
			printf("Cat -> Gato");break;
		case 2:
			printf("Dog -> Cachorro");break;
		case 3:
			printf("Book -> Livro");break;
		case 4:
			printf("Table -> Mesa");break;
		default: 
			printf("Fish -> Peixe");break;
	}
}
