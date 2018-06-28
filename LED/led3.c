/*
	使用函数调用，使得实验板上的发光二极管间隔500ms闪动
*/
#include<reg52.h>
#define uint unsigned int
sbit led1 = P1^0;
void delay();

int main(void)
{
	while(1)
	{
		led1 = 0;
		delay();
		led1 = 1;
		delay();
	}
	return 0;
}

void delay()
{
	uint i,j;
	for(i=500;i>0;i--)
		for(j=110;j>0;j--);
}
