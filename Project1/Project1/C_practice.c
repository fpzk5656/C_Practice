//�˰��� ���� 2����

#include <stdio.h>

int main()
{

	//���� ���� ���� �����ؼ� ���� ������ ������ �˰���?
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
	//���� �ִ� ���� ���ؼ� �� ���� ���� ������ ������ �˰���?
	{
		int i, j, temp;
		int arr[10] = { 3,6,9,4,5,1,2,8,7 };
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 9 - i; j++)
			{
				//�� ����Ŭ ���� ���� ū���� �ǵڷ� ����������
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

	//�� ���ڸ� ������ ��ġ�� �����ϴ� �˰���?
	{
		int i, j, temp;
		int arr[10] = { 3,6,9,4,5,1,2,8,7 };
		for (i = 0; i < 10; i++)
		{
			j = i;
			//i�� �޴� ���ڿ������� ���� ���ڵ��� ���캸�鼭
			//���� ���ڸ� ������ ���� ��
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