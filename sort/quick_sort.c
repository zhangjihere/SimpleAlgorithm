//
// Created by zhangji on 3/6/18.
//

#include <stdio.h>


struct company {
    char *name;
    int cps;
};

/**
 * easy_bubble_sort
 * @return
 */

int num[] = {6, 1, 2, 7, 9, 3, 4, 5, 10, 8};
int n = sizeof(num) / sizeof(num[0]);

void quick_sort(int left, int right) {
    if (left >= right) {
        return;
    }
    int pivot = num[left], i = left, j = right;
    int temp;
    while (i < j) {
        while (i < j && pivot <= num[j]) 
        {//check from right to left. pivot <= num[j],the equivalent mark is used for check pivot self to exchange, otherwise encounter error
            j--;
        }
        while (i < j && num[i] <= pivot) {// check from left to right
            i++;
        }
        if (i < j) { // exchange two num between pivot
            temp = num[j];
            num[j] = num[i];
            num[i] = temp;
        }
    }
    // transfer the pivot to opportune position
    num[left] = num[i];
    num[i] = pivot;
    // recursive invoke quick_sort
    quick_sort(left, i - 1);
    quick_sort(i + 1, right);
}


int main() {
    int temp = 0;
    for (int k = 0; k < n; k++) {
        printf("%d ", num[k]);
    }
    printf("\nn:%d, temp:%d\n", n, temp);
    
    quick_sort(0, n - 1);

    for (int k = 0; k < n; k++) {
        printf("%d ", num[k]);
    }
    // sort struct

    getchar();
    getchar();
    return 0;
}