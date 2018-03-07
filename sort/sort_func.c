//
// Created by zhangji on 3/7/18.
//

#include "sort_func.h"

void bubble_sort(int num[], int n) {
    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (num[j + 1] < num[j]) {
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }
        }
    }
}

void bubble_sort_struct(struct company list[], int m) {
    struct company t;
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (list[j + 1].cps < list[j].cps) {
                t = list[j + 1];
                list[j + 1] = list[j];
                list[j] = t;
            }
        }
    }
}

void qs(int num[], int left, int right) {
    if (left >= right) {
        return;
    }
    int pivot = num[left], temp;
    int i = left, j = right;
    while (i < j) {
        while (i < j && pivot <=
                        num[j]) {//check from right to left. pivot <= num[j],the equivalent mark is used for check pivot self to exchange, otherwise encounter error
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
    qs(num, left, i - 1);
    qs(num, i + 1, right);
}

void quick_sort(int arr[], int n) {
    qs(arr, 0, n - 1);
}

void qs_struct(struct company com[], int left, int right) {
    if (left >= right) {
        return;
    }
    struct company pivot = com[left], temp;
    int i = left, j = right;
    while (i < j) {
        while (i < j && pivot.cps <= com[j].cps) {
            j--;
        }
        while (i < j && com[i].cps <= pivot.cps) {
            i++;
        }
        if (i < j) {
            temp = com[j];
            com[j] = com[i];
            com[i] = temp;
        }
    }
    // transfer the pivot to opportune position
    com[left] = com[i];
    com[i] = pivot;
    // recursive invoke quick_sort
    qs_struct(com, left, i - 1);
    qs_struct(com, i + 1, right);
}

void quick_sort_struct(struct company com[], int n) {
    qs_struct(com, 0, n - 1);
}