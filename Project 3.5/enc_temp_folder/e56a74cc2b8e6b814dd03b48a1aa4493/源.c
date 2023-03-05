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
	printf("姓名:%s\n", f->name);
	printf("性别:%s\n", f->sex);
	printf("年龄:%d\n", f->age);
	printf("关系:%s\n", f->relationship);
}
void adjust(char NAME,family* f1,family* f2,family* f3)
{
	if (NAME = "赵享")
		print(&f1);
	else if (NAME = "汪建玲")
		print(&f2);
	else if (NAME = "赵寿兵")
		print(&f3);
	else
	{
		printf("您输入的名字有误\n请重新输入:\t");
		scanf("%s", &NAME);
		adjust(NAME,&f1,&f2,&f3);
	}
}
int main()
{
	family f1 = { "赵享","男",18,"421181200406182318",NULL };
	family f2 = { "汪建玲","女",45,"422101197811082323","母子" };
	family f3 = { "赵寿兵","男",46,"xxxxxxxxxxxxxxxxxx","父子" };
	char NAME;
	printf("请输入您要查找的人员姓名: ");
	scanf("%s",&NAME);
	adjust(NAME,&f1,&f2,&f3);
	return 0;
}
