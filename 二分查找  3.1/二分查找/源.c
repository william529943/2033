#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_search(int arr[], int k, int sz) //�����arr[]ʵ���Ͼ���ָ�룬����д��int* arr
{
	int right = sz-1;
	int left = 0;
	while (right >= left)
	{
		int mid = (right + left) / 2;
	if (arr[mid] < k)
		left = mid + 1;
	else if (arr[mid] > k)
		right = mid - 1;
	else
		return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k;
	int sz = sizeof(arr) / sizeof(arr[0]);//ֻ���ں�������Ԫ�ظ���
	printf("������һ������\n");
	scanf("%d", &k);
	int ret = binary_search(arr,k,sz);
	if (ret == -1)
	{
		printf("û�ҵ�\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", ret);
	}
	return 0;

}
