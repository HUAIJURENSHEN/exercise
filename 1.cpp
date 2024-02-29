//（1） 在不设置第三个变量的条件下，对于a = 5，b = 3，交换两个数字
int main()
{
	int a = 5;
	int b = 3;
	printf("a=%d  b=%d\n", a, b);
	a = a + b;    //此时a=8  b=3 
	b = a - b;    //此时b=5  a=8  已经交换 
	a = a - b;    //此时b=5  a=3  完成        //存在弊端：也就是数字溢出时数据会丢失（超过二进制位可以表达的上限） 
	printf("a=%d  b=%d\n", a, b);
	return 0;
}

int main()
{
	int a = 5;
	int b = 3;
	printf("a=%d  b=%d\n", a, b);    //采用异或的算法，对二进制位运算 
	b = a ^ b;     //二进制位 a 101 
	//         b 011   结果是 110 6 
	a = a ^ b;     //二进制位 a 101
	//         b 110   结果是 011 3 
	b = a ^ b;     //二进制位 a 011
	//         b 110   结果是 101 5  实现数字交换 
	printf("a=%d  b=%d\n", a, b); \
		return 0;
}
