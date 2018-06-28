/*
	使用_crol_()函数，实现流水灯程序
*/
/*
	#include<intrins.h>
	unsigned char _crol_(unsigned char c,unsigned char b);
	---------------------------------------------------------------------------
	Description:
	The _crol_ routine rotates the bit pattern for the character c left b bits.
	This routine is implemented as an intrinsic function.
	The code required is included in-line rather than being called.

	Return Value:
	The _crol_ routine returns the rotated value of c.
	---------------------------------------------------------------------------
	描述：
		_crol_函数将字符c循环左移b位，这是C51库自带的内部函数，在使用这个函数之前，需要在
	文件中包含它所在的头文件。

	返回值：
		_crol_函数返回的是将c循环左移之后的值。
	---------------------------------------------------------------------------
*/
#include<reg52.h>
#include<intrins.h>
#define uint unsigned int
#define uchar unsigned char
void delay(uint);
uchar aa;

int main(void)
{
	aa = 0xfe;//赋初值11111110
	while(1)
	{
		P1 = aa;
		delay(500);
		aa = _crol_(aa,1);

	}
	return 0;
}

void delay(uint xms)
{
	uint i,j;
	for(i=xms;i>0;i--)
		for(j=110;j>0;j--);	
}