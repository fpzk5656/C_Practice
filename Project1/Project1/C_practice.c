//알고리즘 연습 2일차

#include <stdio.h>

int main()
{

	//가장 작은 것을 선택해서 제일 앞으로 보내는 알고리즘?
	{
		int i, j, temp, min, index;
		int arr[10] = { 5,2,3,1,7,4,6,9,8,0 };

		for (i = 0; i < 10; i++)
		{
			min = 9999;
			for (j = i; j < 10; j++)
			{
				if (min > arr[j])
				{
					min = arr[j];
					index = j;
				}
			}
			temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", arr[i]);
		}
	}
	//옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내는 알고리즘?
	{
		int i, j, temp;
		int arr[10] = { 3,6,9,4,5,1,2,8,7 };
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 9 - i; j++)
			{
				//각 사이클 마다 가장 큰값이 맨뒤로 보내지도록
				if (arr[j] > arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		printf("\n");
		for (i = 0; i < 10; i++)
		{
			printf("%d ", arr[i]);
		}
	}

	//각 숫자를 적절한 위치에 삽입하는 알고리즘?
	{
		int i, j, temp;
		int arr[10] = { 3,6,9,4,5,1,2,8,7 };
		for (i = 0; i < 10; i++)
		{
			j = i;
			//i로 받는 숫자에서부터 앞의 숫자들을 살펴보면서
			//작은 숫자를 앞으로 댕기는 식
			while (j >= 0 && arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				j--;
			}
		}
	}
	return 0;
}