#include <stdio.h>
#include<stdbool.h>

int main(void)
{
	int sum = 0, number =0, min=0;
	bool first = true;
	for (int i = 1; i <= 7; i++)
	{
		scanf_s("%d", &number);
		if (number % 2 == 1)
		{
			sum = sum + number;
			
			
			if (first)
			{
				min = number;
				first = false;
			}
			if (number <= min)
				min = number;

		}
	}
	if (sum == 0)
		printf("-1");
	else
	{
		printf("%d\n", sum);
		printf("%d", min);
	}
	return 0;
}