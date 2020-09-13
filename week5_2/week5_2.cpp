#include<stdio.h>
int main()
{
	int input1 = 0;
	int input2 = 0;
	int high = 0;
	int low = 0;
	scanf_s("%d%d", &input1, &input2);
	if (input1 > input2)
	{
		high = input1;
		low = input2;
	}
	else
	{
		high = input2;
		low = input1;
	}
	for (int i = low; i <= high; i++)
	{
		int check_prime = 0;
		if (i < 2)
		{
			check_prime++;
		}
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0 )
			{
				check_prime++;
				break;
			}
		}
		if (check_prime == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}