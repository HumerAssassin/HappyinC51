//
//  led1.c
//  ledTest
//
//  Created by mac on 2018/6/27.
//  Copyright © 2018 mac. All rights reserved.
//

#include "led1.h"
/*------------------*
 *   第一颗二极管常亮  *
 *------------------*/
#include<reg51.h>
sbit P1_0 = P1^0;

int main(void)
{
    while(1)
    {
        P1_0 =0;
    }
    return 0;
}
