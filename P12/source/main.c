#include <stdio.h>
#include <stdlib.h>


void main()
{
	int x;

		for (x = 1; x <= 10; x++)
		{
			printf("%d ", square(x));
		}
	printf("\n");
	system("pause");
	return 0;
	
}
int square(int a)
{
	return a * a;
}