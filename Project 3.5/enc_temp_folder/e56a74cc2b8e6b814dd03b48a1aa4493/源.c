#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct FAMILY
{
	char name;
	char sex;
	short age;
	char ID;
	char relationship;
}family;
void print(family* f)
{
	printf("����:%s\n", f->name);
	printf("�Ա�:%s\n", f->sex);
	printf("����:%d\n", f->age);
	printf("��ϵ:%s\n", f->relationship);
}
void adjust(char NAME,family* f1,family* f2,family* f3)
{
	if (NAME = "����")
		print(&f1);
	else if (NAME = "������")
		print(&f2);
	else if (NAME = "���ٱ�")
		print(&f3);
	else
	{
		printf("���������������\n����������:\t");
		scanf("%s", &NAME);
		adjust(NAME,&f1,&f2,&f3);
	}
}
int main()
{
	family f1 = { "����","��",18,"421181200406182318",NULL };
	family f2 = { "������","Ů",45,"422101197811082323","ĸ��" };
	family f3 = { "���ٱ�","��",46,"xxxxxxxxxxxxxxxxxx","����" };
	char NAME;
	printf("��������Ҫ���ҵ���Ա����: ");
	scanf("%s",&NAME);
	adjust(NAME,&f1,&f2,&f3);
	return 0;
}
