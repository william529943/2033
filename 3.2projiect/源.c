#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//1. ָ��δ��ʼ��
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