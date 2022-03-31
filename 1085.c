#include <stdio.h>

int main(void)
{
	int x = 0, y = 0, w = 0, h = 0;
	int min = 0;
	

	scanf_s("%d %d %d %d", &x, &y, &w, &h);
	
	if (x >= y)
	{
		min = y;
		if (y >= w - x)
		{
			min = w - x;
			if (w - x >= h - y)
				min = h - y;
		}
		else
			if (y >= h - y)
				min = h - y;
	}

	else
	{
		min = x;
		if (x >= w - x)
		{
			min = w - x;
			if (w - x >= h - y)
				min = h - y;
		}
		else
		{
			if (x >= h - y)
				min = h - y;
		}


	}


	printf("%d\n", min);



	return 0;
}