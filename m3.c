#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int array_size, n;
	int *ptr_data;

	/* asking for array size */
	printf("Enter array size: ");
	scanf("%d", &array_size);

	/* assigning array_size times the size of each element*/
	ptr_data = (int*) calloc (array_size, sizeof(int)); //in this case, element is int

	/* checking for failure */
	if(ptr_data==NULL)
	{
		printf("ERROR");
		exit(1);
	}

	/* asking for individual values for array */
	for(n=0; n<array_size; n++)
	{
		printf("Enter number #%d: ", (n + 1));
		scanf("%d", &ptr_data[n]);
	}

	/* output */ 
	printf("Output: ");
	for(n=0; n<array_size; n++)
		printf("%d ", ptr_data[n]);

	/* freeing data */
	free(ptr_data);
	return 0;
}