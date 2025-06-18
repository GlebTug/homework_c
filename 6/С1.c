#include <stdio.h>

int module(void)
{
	int a;
	scanf("%d", &a);
		
	a < 0 ? printf("%d", -a) : printf("%d", a);

	
	return a;
}

int main(int argc, char **argv)
{
	module();
	
	return 0;
}

