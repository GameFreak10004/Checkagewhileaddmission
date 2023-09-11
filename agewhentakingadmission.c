#include<stdio.h>
#include<string.h>
#include<time.h>
struct stu
{
	int rn;
	char nm[10];
	struct agecal
	{
		int d;
		int m;
		int y;
	}b,d;
};
int main()
{
	struct stu a;
	printf("Enter Name");
	scanf("%s",a.nm);
	printf("Enter Roll Number");
	scanf("%d",&a.rn);
	printf("Enter BOD");
	scanf("%d-%d-%d",&a.b.d,&a.b.m,&a.d.y);
	printf("Enter When did the horror start");
	scanf("%d-%d-%d",&a.d.d,&a.d.m,&a.d.y);
	int tm_year;
	printf("%d",tm_year);
	printf("Age of stutdent when taking admission is :%d",a.b.y-a.d.y);
}
