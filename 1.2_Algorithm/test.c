#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


#include<stdio.h>
#include<string.h>

//1.2.2算法效率的度量

//算法1-逐步递增型爱你
void loveyou(int n)//n为问题规模
{
	int i = 1;//爱你的程度，1次
	while (i <= n)//3001次
	{
		i++;//每次加一，3000次
		printf("I love you %d\n", i);//3000次
	}
	printf("I love you more than %d\n", n);//1次
}
int main()
{
	loveyou(3000);
}
//T(3000)=1+3001+2*3000+1
//时间开销与问题规模n的关系：T(n)=3n+3