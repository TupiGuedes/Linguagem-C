#include<stdio.h>
#include<math.h>


main()
{
	int i=1, exp;
	
	while (i<=25)
	{
		exp = pow(i, 2);
		
		printf("%d ao quadrado = %d \n", i, exp);
		
		i++;
	}
}

