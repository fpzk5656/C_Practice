#include <stdio.h>

int main()
{
	// ���� ����(Insertion Sort) �˰���

	//������ �Ǿ��ٴ� �����Ͽ����� ���� �˰���
	//�ݺ����� �ι� ���� ���⵵�� O(N^2)

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