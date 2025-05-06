#include <stdio.h>
#include <locale.h>

int main(void)
{
	//~ A3
	//~ int a, b, c, sum;
	//~ scanf("%d%d%d", &a, &b, &c);
	//~ sum = a + b + c;
	//~ printf("%d+%d+%d=%d\n", a, b, c, sum);
	
	//~ A4
	//~ int a, b, c, sum, multip;
	//~ scanf("%d%d%d", &a, &b, &c);
	//~ sum = a + b + c;
	//~ multip =  a * b * c;
	//~ printf("%d+%d+%d=%d\n", a, b, c, sum);
	//~ printf("%d*%d*%d=%d\n", a, b, c, multip);
	
	//~ A5
	//~ int a, b, c;
	//~ float d;
	//~ scanf("%d%d%d", &a, &b, &c);
	//~ d = (float)(a + b + c)/3;
	//~ printf("%.2f", d);
	
	//~ A12
	//~ int a, sum;
	//~ scanf("%d", &a);
	//~ sum = a%10;
	//~ sum += (a/10)%10;
	//~ sum += (a/100)%10;
	//~ printf("%d", sum);
	
	//~ A13
	int a, sum;
	scanf("%d", &a);
	sum = a%10;
	sum *= (a/10)%10;
	sum *= (a/100)%10;
	printf("%d", sum);
	
	return 0;
}

