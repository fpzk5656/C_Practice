#include <stdio.h>

int main()
{
	// ��������(Selection Sort)
	
	//�ð� ���⵵�� O(N^2)
	//N*(N + 1) / 2

	int i, j, min, index, temp;
	int array[10] = { 1,10,6,7,2,3,4,8,5,9 };
	for (int i = 0; i < 10; i++)
	{
		min = 9999;
		for (int j = i; j < 10; j++)
		{
			//min���� ���� ���� min�� ����
			//index���� �� min���� �ִ� �ε�����ȣ�� ����
			//j�� ���۹�ȣ�� i�̴ϱ� �̰� �ݺ��Ǹ�
			//���� i�� ��ȣ�κ��� ������ �߿� ���� ���� ���ڸ� Ž���ϴ� ��
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		//���� i�� �ִ� ���ڿ�
		//���� ���� ���ڸ� �ٲ۴�
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}

	return 0;
}