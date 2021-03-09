#include <stdio.h>

int main()
{
	// 삽입 정렬(Insertion Sort) 알고리즘

	//정렬이 되었다는 가정하에서는 빠른 알고리즘
	//반복문이 두번 들어가서 복잡도는 O(N^2)

	int i, j, temp;
	int arr[10] = { 1,4,9,6,5,3,7,2,8,10 };

	for (i = 0; i < 9; i++)
	{
		j = i;
		while (j >= 0 && arr[j] > arr[j + 1])
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}