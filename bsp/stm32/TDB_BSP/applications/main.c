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
        /* 在这里让程序进入循环，通过这种方式实现 MicroPython 的软复位*/
        extern void mpy_main(const char *filename);
         /* 启动 MicroPython */
        mpy_main(NULL);
//    }

    return RT_EOK;
}
