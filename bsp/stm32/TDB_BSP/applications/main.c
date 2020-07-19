/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-11-06     SummerGift   first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>

/* defined the LED0 pin: PB1 */
//#define LED0_PIN    GET_PIN(B, 1)

int main(void)
{
//    while(1)
//    {
        /* �������ó������ѭ����ͨ�����ַ�ʽʵ�� MicroPython ����λ*/
        extern void mpy_main(const char *filename);
         /* ���� MicroPython */
        mpy_main(NULL);
//    }

    return RT_EOK;
}
