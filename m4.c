#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, k;
	int ROWS = 5;
	int COLS = 5;
	int **two_d_array;

	two_d_array =(int **)malloc(sizeof(int *)*ROWS);

	/*allocation*/
	for(i = 0; i < ROWS; i++)
	{
		two_d_array[i] = (int *)malloc(sizeof(int) * COLS);
	}

	/*populating*/
	for(i = 0; i < ROWS; i++)
	{
		for(k = 0; k < COLS; k++)
		{
			two_d_array[i][k] = 0;
			printf("%d ", two_d_array[i][k]);
		}
		printf("\n");
	}
}