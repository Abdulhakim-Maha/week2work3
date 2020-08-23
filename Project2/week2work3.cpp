#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter value to check :");
	scanf_s("%d", &n);
	for (i = 2;i < n;i++)
	{
		
		if (n % i == 0)
		{
			printf("Not a prime number\n");
			break;
		}
	}
	if (i == n)
	{
		printf("prime number");
	}
}