1. ָ���ʼ��
2. С��ָ��Խ��
3. ָ��ָ��ռ��ͷż�ʹ��NULL
4. ���ⷵ�ؾֲ������ĵ�ַ
5. ָ��ʹ��֮ǰ�����Ч��
4. ָ������
#include <stdio.h>
int main()
{
	int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
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
		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
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