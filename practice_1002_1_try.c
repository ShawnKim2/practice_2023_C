#include <stdio.h>

void my_func(int);

void my_func(int n)
{
	printf("Level %d, address of variable n = %p\n", n, &n);
	if (n < 4)
		my_func(n + 1);
}

int main(void)
{
	my_func(1);
	
	return 0;
}

