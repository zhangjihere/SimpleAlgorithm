//
// Created by zhangji on 3/5/18.
//

#include <stdio.h>

/**
 * easy_bucket_sort
 * @return 
 */
int main()
{
    int origin[] = {5, 2, 2, 5, 1};
    int num[6],s;
    for (int i = 0; i <= 5; i++)
        num[i] = 0;
    for (int i = 0; i < 5; i++)
    {
//        scanf("%d", &s);
        num[origin[i]]++;
    }

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 1; j <= num[i]; j++)
        {
            printf("%d", i);
        }
    }
    getchar();
    getchar();
    return 0;
}