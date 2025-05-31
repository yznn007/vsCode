#include<stdio.h>
int i;
int j;
int k;
int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
void bubblingsort()
{
	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 9; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				k = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = k;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void selectsort()
{
	for (i = 0; i < 10; i++)
	{
		k = i;
		for (j = i + 1; j < 10; j++)
		{
			if (arr[j] < arr[k])
				k = j;
		}
		int temp = arr[i];
		arr[i] = arr[k];
		arr[k] = temp;
	}
}
int main()
{	
	bubblingsort();
	selectsort();
	return 0;
}