#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)


#include<stdio.h>
#include<string.h>

//1.2.2�㷨Ч�ʵĶ���

//�㷨1-�𲽵����Ͱ���
void loveyou(int n)//nΪ�����ģ
{
	int i = 1;//����ĳ̶ȣ�1��
	while (i <= n)//3001��
	{
		i++;//ÿ�μ�һ��3000��
		printf("I love you %d\n", i);//3000��
	}
	printf("I love you more than %d\n", n);//1��
}
int main()
{
	loveyou(3000);
}
//T(3000)=1+3001+2*3000+1
//ʱ�俪���������ģn�Ĺ�ϵ��T(n)=3n+3