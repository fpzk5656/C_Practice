#include <stdio.h>

int main()
{
	// 버블 정렬(Bubble Sort) 알고리즘

	//옆에 있는 숫자와 비교해서 더 작은 것을 앞으로 보내는 것
	//구현은 쉽지만 가장 비효율적임

	int i, j, temp;
	int arr[10] = { 1,4,9,6,5,3,7,2,8,10 };

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}