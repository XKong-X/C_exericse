#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////简单模拟实现库函数strlen
//////常规方法实现
////int my_strlen(char* s)
////{
////	int count = 0;
////	while (*(s++) != '\0')
////	{
////		count++;
////	}
////	return count;
////}
////递归实现
//int my_strlen(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(++s);
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
////n的阶乘
//////常规方法实现
////int Fac(int n)
////{
////	int tmp = 1;
////	for (int i = n; i > 0; i--)
////	{
////		tmp *= i;
////	}
////	return tmp;
////}
////递归实现
//int Fac(int n)
//{
//	if (n<=1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 0)
//	{
//		int ret = Fac(n);
//		printf("%d\n", ret);
//	}
//	else
//	{
//		printf("不存在！\n");
//	}
//	return 0;
//}
//
////斐波那契数列
////常规方法实现
//int Fib(int n)
//{
//	int a, b, c;
//	a = b = c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b; 
//		b = c;
//		n--;
//	}
//	return c;
//}
////递归实现
//int Fib(int n)
//{
//	int ret;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int ret = Fib(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//
////递归实现n的k次方
//double pow_num(int n, int k)
//{
//	if (0 == k)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * pow_num(n, k - 1);
//	}
//	else//k<0
//	{
//		return (1.0 / n) * pow_num(n, k + 1);
//	}
//}
//int main() 
//{
//	int n, k;
//	while (~scanf("%d %d", &n, &k))
//	{
//		double ret = pow_num(n, k);
//		printf("%lf\n", ret);
//	}
//	return 0;
//}
//
////计算一个数的每位之和（递归实现）
//int DigitSum(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	else
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int ret = DigitSum(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}
//
////字符串逆序（递归实现）
//int my_strlen(char* s)//求字符串长度
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(++s);
//}
//void reverse_string(char arr[], int l, int r)//字符串逆序
//{
//	if (l < r)
//	{
//		char tmp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = tmp;
//		l++; r--;
//		reverse_string(arr, l, r);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	int l = 0;
//	int r = len - 1;
//	reverse_string(arr,l,r);
//	puts(arr);//验证
//	return 0;
//}
//
////递归方式实现打印一个整数的每一位
//void DigitSum(int n)
//{
//	if (n >= 10)
//	{
//		DigitSum(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		DigitSum(n);
//	}
//	return 0;
//}
//
////冒泡排序
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[10] = { 0 };//例：25 35 68 79 21 13 98 7 16 62
//	int i, j, tmp;
//	for (i = 0; i < n; i++)//读数据
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)//外层循环
//	{
//		int flag = 0;
//		for (j = i + 1; j < n ; j++)//内层循环
//		{
//			if (arr[i] > arr[j])//交换
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)//如果某趟循环没进行交换，则说明数据已有序，跳出整个循环
//			break;
//	}
//	for (i = 0; i < 10; i++)//打印验证
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
////实现函数init()初始化数组为全0;实现print()打印数组的每个元素;实现reverse()函数完成数组元素的逆置
//void init_t(int arr[], int n)//用于验证reverse函数
//{
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = i;
//	}
//}
//void init(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int n)
//{
//	int l = 0;
//	int r = n - 1;
//	while (l < r)
//	{
//		char tmp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = tmp;
//		l++; r--;
//	}
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n))
//	{
//		int arr[100];
//		init(arr, n);
//		print(arr, n);
//		init_t(arr, n);//用于验证reverse函数
//		print(arr, n);//用于验证reverse函数
//		reverse(arr, n);
//		print(arr, n);//用于验证reverse函数
//	}
//	return 0;
//}