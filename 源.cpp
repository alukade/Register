#include<stdio.h>

int main(void)
{
	register int i = 520;

	printf("Addr of i:%p\n", &i);//现在的有些编译器上，如果你对申明为寄存器变量的变量取地址，会自动变成普通变量，存放在内存中，不会再报错。因为不太可能申请到寄存器地址

	return 0;
}