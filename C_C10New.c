int count_bits(int n)      //求一个数的二进制编码中1的个数
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
void Function1(int num)
{
	int i = 0;
	printf("偶数："); 
	for (i = 31; i >= 1; i -= 2)
	{ 
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	printf("奇数：");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
}
int CalcDif(int num1,int num2)
{
	int m, n;
	int count = 0;
	m = num1 ^ num2;//不一样的，要进行异或，异或之后会转变为另一个数字，
					//这个数字表达的就是前两者中不一样的位数变为1了，比如
					//   0000 0111
					// ^ 0000 0100
					//--------------
					//   0000 0011
					//这样问题就转化为求两数异或之后的数中1的个数了。
	while (m > 0)
	{
		m = m & (m - 1);//求这个数的二进制序列中1的个数
		count++;
	}
	return count;
}
int main()
{
	printf("%d", CalcDif(1999, 2299));
	//Function1(4);
	//int n;
	//scanf("%d", &n);
	//int ret = count_bits(n);
	//printf("%d", ret);
	system("pause");
	return 0;
}
