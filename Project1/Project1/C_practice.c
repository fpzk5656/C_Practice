//�˰��� ���� 3����
#include <stdio.h>

int main()
{
	{
		int i, j, index, temp;
		int arr[10] = { 5,3,2,1,6,8,7,9,0,4 };

		for (i = 0; i < 10; i++)
		{
			int min = 999;
			//0�������� ���������� ������ ��������
			//���� �߿� ���� ���� ���ڸ� i��ġ�� ���ڶ� �ٲ۴�.
			for (j = i; j < 10; j++)
			{
				if (arr[j] < min)
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

	return 0;
}