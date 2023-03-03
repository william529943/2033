#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* a)
{
	char* start = a;
	char* end = a;
	while(*end != /*NULL*/'\0')
	{
		end++;//直接把end自加即可
	}
	printf("%s\n", *end);
	return (end - start);//这个时候*end变为了NULL
}
int main()
{
	char arr[] = "bit";//数组里放的是b  i  t  '\0'
	int len = my_strlen(arr);
		printf("%d\n", len);
		return 0;
}
