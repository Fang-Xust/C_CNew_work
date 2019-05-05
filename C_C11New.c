# C_CNew_work
Chomework
#include<stdio.h>
#include<windows.h>
#define ROW 20
void Function2()
{
	char killer = '\0';
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
		{
			printf("killer:%c", killer);
		}
	}
} 
void Function1()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((b == 2) + (a == 3) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1 && (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) == 1)
						{
							if (120 == a * b * c * d * e)
							{
								printf("A:%d,B:%d,C:%d,D:%d,E:%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
}
void Function3(int arr[][ROW], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j || j == 0)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
}
void Show(int (*arr)[ROW])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%-5d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[ROW][ROW] = { 0 };
	Function3(arr,ROW,ROW);
	Show(arr);
	system("pause");
	return 0;
}
