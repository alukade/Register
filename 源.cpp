#include<stdio.h>

int main(void)
{
	register int i = 520;

	printf("Addr of i:%p\n", &i);//���ڵ���Щ�������ϣ�����������Ϊ�Ĵ��������ı���ȡ��ַ�����Զ������ͨ������������ڴ��У������ٱ�����Ϊ��̫�������뵽�Ĵ�����ַ

	return 0;
}