#include <stdio.h>

int main()
{
	// 선택정렬(Selection Sort)
	
	//시간 복잡도는 O(N^2)
	//N*(N + 1) / 2

	int i, j, min, index, temp;
	int array[10] = { 1,10,6,7,2,3,4,8,5,9 };
	for (int i = 0; i < 10; i++)
	{
		min = 9999;
		for (int j = i; j < 10; j++)
		{
			//min보다 작은 값은 min에 저장
			//index에는 그 min값이 있던 인덱스번호를 저장
			//j의 시작번호가 i이니까 이게 반복되면
			//현재 i의 번호로부터 끝까지 중에 가장 작은 숫자를 탐색하는 것
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		//현재 i에 있는 숫자와
		//가장 작은 숫자를 바꾼다
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