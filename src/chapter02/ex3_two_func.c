/**
 * @file ex2_3_two_func.c
 * @brief 一个文件包含两个函数
 * @date 2022-09-18
 */
#include <stdio.h>

void butler(void); // ANSI/ISO C函数原型

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler()
{
    printf("You rang, sir?\n");
}
