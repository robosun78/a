#include <stdio.h>
#include<stdbool.h>

int main(void)
{
	int max = 0, number=0;
	char a[8];
	bool first = true;

	for (int i = 0; i <= 8; i++)
	{
		scanf_s("%d", &a[i]);
		if (first)
		{
			max = a[i];
			first = false;
		}
		if (a[i] >= max)
		{
			max = a[i];
			number = i+1;
		}
		
	}
	printf("%d\n", max);
	printf("%d", number);
	return 0;
}