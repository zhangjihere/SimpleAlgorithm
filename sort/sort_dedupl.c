//
// Created by zhangji on 3/7/18.
//
// problem: process a int array, it include deduplication and sort.

#include <stdio.h>
#include "sort_func.h"

int num[] = {20, 40, 32, 67, 40, 20, 89, 300, 400, 15};
int n = sizeof(num) / sizeof(num[0]);

int main() {
    // bucket sort and dedepulation
    int buck[1001];
    int buckn = sizeof(buck) / sizeof(buck[0]);
    for (int i = 0; i < 1001; i++) {
        buck[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        buck[num[i]]++;
        printf("%d ", num[i]);
    }
    printf("\n");
    for (int i = 0; i < buckn; i++) {
        if (buck[i] != 0) {
            printf("%d ", i);
        }
    }
    
}