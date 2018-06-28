/*
	实验板第一个发光二极管间隔1秒闪动
*/
#include<reg52.h>
#define uint unsigned int
sbit led1 = P1^0;
uint i,j;

int main(void)
{
	while(1)
	{
		led1 = 0;
		for(i=1000;i>0;i--)
			for(j=110;j>0;j--);
		led1 = 1;
		for(i=1000;i>0;i--)
			for(j=110;j>0;j--);
	}
	return 0;
}