1. 指针初始化
2. 小心指针越界
3. 指针指向空间释放即使置NULL
4. 避免返回局部变量的地址
5. 指针使用之前检查有效性
4. 指针运算
#include <stdio.h>
int main()
{
	int* p;//局部变量指针未初始化，默认为随机值
	*p = 20;
	return 0;
}
#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		//当指针指向的范围超出数组arr的范围时，p就是野指针
		*(p++) = i;
	}
	return 0;
}
#include <stdio.h>
int main()
{
	int* p = NULL;
	//....
	int a = 10;
	p = &a;
	if (p != NULL)
	{
		*p = 20;
	}
	return 0;
}