//（2） 给定一个非空整型数组，除了一个元素只出现一次之外其他元素均出现两次，找到只出现一次的元素
//找到单身狗
int main()
{
	int i = 0;
	int a[] = { 1,2,3,4,5,1,2,3,4 };
	int sz = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		int count = 0;
		for (j = 0; j < sz; j++)
		{
			if (a[i] == a[j])    //暴力一个一个对比，但是算法效率很低，效率低下 
			{
				count++;
			}
		}
		if (count == 1)          //只要等于1就直接break输出 
		{
			break;
		}
	}
	printf("单身狗：%d\n", a[i]);
	return 0;
}
int main()
{
	int i = 0;
	int ret = 0;
	int a[] = { 1,2,3,4,5,1,2,3,4,5,7 };
	int sz = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ a[i];       //异或算法实现  例如 3^5^3=3^3^5=5  ,  0^5=5 
	}
	printf("单身狗：%d\n", ret);
	return 0;
}
