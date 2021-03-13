//알고리즘 연습 1일차
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//선택정렬
	// 가장 작은 것을 '선택'해서 제일 앞으로 보내는 알고리즘
	// N * (N + 1) / 2 번 가량 연산.. 가장 큰 차수만 보고 O(N^2)
	{
		int arr[10] = { 1,5,2,6,7,4,9,3,8,0 };
		int i, j, min, index, temp;

		for (i = 0; i < 10; i++)
		{
			//작은 숫자를 넣을 공간인 min
			//전체를 검색해서 min보다 작은 숫자를 min에 넣고
			//그 숫자가 있던 인덱스 번호를 챙겨서
			min = 9999;
			for (j = i; j < 10; j++)
			{
				if (min > arr[j])
				{
					min = arr[j];
					index = j;
				}
				temp = arr[index];
				arr[index] = arr[i];
				arr[i] = temp;
			}
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", arr[i]);
		}
	}
	//버블정렬
	// 옆에 있는 값과 비교하여 더 작은 숫자를 반복적으로 앞으로 보내주는 식의 알고리즘
	// 시간복잡도는 O(N^2)ㅇ
	{
		int arr[10] = { 3,4,2,6,7,8,1,9,5,0 };
		int i, j, temp;
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 9 - i; j++)
			{
				if (arr[j] > arr[j+1])
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		
			printf("\n");
		for (i = 0; i < 10; i++)
		{
			printf("%d ", arr[i]);
		}

	}
	//삽입정렬
	// 필요할 때만 즉,적절할 때에 각 숫자의 위치를 바꾸어 정렬하는 알고리즘
	// 시간복잡도는 O(N^2)
	{
		int i, j, temp;
		int arr[10] = { 1,10,2,5,9,6,3,4,7,8};
		for (i = 0; i < 9; i++)
		{
			//j에서 세분화해서 돌리려는 의도
			//배열은 10개인데 i는 9개인 이유는 +1을 붙여서 표현할려는 의도겠지
			//둘을 비교해서 더 작은것을 앞으로
			j = i;
			while (j >= 0 && arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	//삽입정렬 심화
	{
			int arr[101];
		{
			int j, i, temp, n;
			scanf("%d", &n);
			//입력을 한 숫자 이전만큼 (인덱스 개수 만들기)
			//반복해서 숫자를 일일이 입력한다.
			for (i = 0; i < n; i++)
			{
				scanf("%d", &arr[i]);
			}
			//i를 n이전까지 반복
			//j = i 넣고
			// j가 0보다 클 때부터 arr[j-1]과 arr[j]를 비교해
			//arr[j-1]이 더 크면 바로 다음 숫자인 arr[j]와 스왑해주고
			//j를 -1씩 연산하는 식으로 정렬할 범위를 선택해서 정렬하는 것
			for (i = 0; i < n; i++)
			{
				j = i;
				while (j > 0 && arr[j - 1] > arr[j])
				{
					temp = arr[j - 1];
					arr[j - 1] = arr[j];
					arr[j] = temp;
					j--;
				}
			}
			for (j = 0; j <= i; j++)
			{
				printf("%d ", arr[j]);
			}
			printf("\n");
		}
	}

	return 0;
}