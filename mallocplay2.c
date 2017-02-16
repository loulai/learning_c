#include<stdio.h>

int main()
{
	/*
	int *p_array;
	int i;
	
	p_array = (int *)malloc(sizeof(int)*25);

	for(i = 0; i < 25; i++)
	{
		p_array[i] = 0;
	}

	for(i = 0; i < 25; i++)
	{
		printf("%3d) %d\n", i + 1, p_array[i]);
	}
	*/

	int i, k;
	int ROWS = 5;
	int COLS = 5;
	int *two_d_array;
	two_d_array = (int *)malloc(sizeof(int)*ROWS*COLS);

	for(i = 0; i < ROWS; i++)
	{
		for(k = 0; k < COLS; k++)
		{
			two_d_array[i*ROWS + k] = 0;
		}
	}

	for(i = 0; i < ROWS; i++)
	{
		for(k = 0; k < COLS; k++)
		{
			printf("%d ", two_d_array[i*ROWS + k]);
		}
		printf("\n");
	}

}