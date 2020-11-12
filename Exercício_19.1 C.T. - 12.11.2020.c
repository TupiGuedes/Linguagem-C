#include<stdio.h>
#include<math.h>

par_impa(int x)
{
	if (x % 2 == 0)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}

cubo(int x)
{
	return x*x*x;
}

quad(int x)
{
	return x*x;
}

main()
{
	int a, b, c, d;
	
	printf("Digite um valor \n");
	scanf("%d", &a);
	
	b = par_impa(a);
	c = quad(a);
	d = cubo(a);
	
	if (b == 0)
	{		
		printf("Resultado par: %d", c);
	}
	if (b == 1)
	{	
		printf("Resultado impa: %d", d);
	}
}

