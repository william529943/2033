#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* a)
{
	char* start = a;
	char* end = a;
	while(*end != /*NULL*/'\0')
	{
		end++;//ֱ�Ӱ�end�ԼӼ���
	}
	printf("%s\n", *end);
	return (end - start);//���ʱ��*end��Ϊ��NULL
}
int main()
{
	char arr[] = "bit";//������ŵ���b  i  t  '\0'
	int len = my_strlen(arr);
		printf("%d\n", len);
		return 0;
}
