/*
	实验板第一个二极管亮200ms，灭800ms
*/
#include<reg52.h>
#define uint unsigned int
sbit led1 = P1^0;
void delay(uint);

int main(void)
{
	while(1)
	{
		led1 = 0;
		delay(200);
		led1 = 1;
		delay(800);
	}
	return 0;
}

void delay(uint xms)
{
	uint i,j;
	for(i=xms;i>0;i--)
		for(j=110;j>0;j--);
}