//
// Created by zhangji on 3/5/18.
//

#include <stdio.h>

/**
 * easy_bucket_sort
 * @return 
 */

int templateNum[] = {6, 1, 2, 7, 9, 3, 4, 5, 10, 8};

int num[11];
int n = sizeof(num) / sizeof(num[0]);

int main() {
    for (int i = 1; i < n; i++) {
        num[i] = templateNum[i-1];
        printf("%d ", num[i]);
    }
    printf("\nn:%d\n", n);

    
    int buck[n];
    for (int i = 0; i < n; i++) {
        buck[i] = 0;
    }
    for (int i = 1; i < n; i++) {
        buck[num[i]]++;
    }

    for (int i = 1; i < n; i++) {
        if (buck[i] != 0) {
            for (int j = 0; j < buck[i]; j++) {
                printf("%d ", i);
            }
        }
    }

    getchar();
    getchar();
    return 0;
}