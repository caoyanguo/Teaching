﻿#include <stdio.h>

int main()
{
    /**
        i = 0, 0 < 3, 成立，进入循环体
            j = 0, 0 < 3, 成立，进入循环体
                输出a[0][0]，执行j++
            j = 1, 1 < 3, 成立，进入循环体
                输出a[0][1]，执行j++
            j = 2, 2 < 3, 成立，进入循环体
                输出a[0][2], 执行j++
            j = 3, 3 < 3, 不成立，结束循环
            输出换行，再执行i++
        i = 1
    */
    int a[][3] = {{1, 2, 3}, {4, 5}, {6, 7, 8}};
    for (int i = 0; i < 3; i++) // i < 3，此时的3是有多少一维数组
    {
        for (int j = 0; j < 3; j++) // j < 3, 此时的3是一维数组的长度
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
