/*******************************************************************************
    GPIO的初始化
在文件源码 /drivers/gpio/gpio-exynos4.c
    <1> core_initcall(exynos4_gpiolib_init);
    <2> core_initcall 代表在linux初始化过程中会调用
    <3> 初始化函数是在源码目录下"include/linux/init.h"文件中定义的，该文件中定义
        了一系列的初始化函数，在linux启动过程中会按照级别调用

(a)内部寄存器不是很快吗，CPU为什么不直接读取?
    内部寄存器是很快的，但是相对于CPU还是很慢的。CPU处理数据是将内存中一大段一大
    段处理，如果单个的读取内部寄存器的值，对CPU是极大的浪费。把内部寄存器也看成
    "特殊的物理地址"即可。
*******************************************************************************/
