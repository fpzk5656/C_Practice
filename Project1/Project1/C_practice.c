#include <stdio.h>

int main()
{
	// ���� ����(Bubble Sort) �˰���

	//���� �ִ� ���ڿ� ���ؼ� �� ���� ���� ������ ������ ��
	//������ ������ ���� ��ȿ������

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