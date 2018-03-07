// easy_bubble_sort
// Created by zhangji on 3/6/18.
//

#include <stdio.h>
#include <string.h>

struct company {
    char *name;
    int cps;
};

int templateNum[] = {6, 1, 2, 7, 9, 3, 4, 5, 10, 8};
char *templateStruct[] = {"SS", "AA", "QQ", "GG", "EE", "JJ", "CC", "BB", "HH", "CC"};

int num[10];
int n = sizeof(num) / sizeof(num[0]);

struct company com[10];
int sn = sizeof(com) / sizeof(com[0]);

void quick_sort(int left, int right) {
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
    quick_sort(left, i - 1);
    quick_sort(i + 1, right);
}

void printNumArray(int num[], int n) {
    for (int k = 0; k < n; k++) {
        printf("%d ", num[k]);
    }
    printf("\n");
}

void quick_sort_struct(int left, int right) {
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
    quick_sort_struct(left, i - 1);
    quick_sort_struct(i + 1, right);
}

void printStructArray(struct company com[], int sn) {
    for (int k = 0; k < sn; k++) {
        printf("%d-%s  ", com[k].cps, com[k].name);
    }
    printf("\n");
}

int main() {
    // sort int array
    for (int i = 0; i < n; i++) {
        num[i] = templateNum[i];
        printf("%d ", num[i]);
    }
    printf("\nn:%d\n", n);
    quick_sort(0, n - 1);
    printNumArray(num, n);
    printf("\n");

    // sort struct
    for (int i = 0; i < sn; i++) {
        com[i].cps = templateNum[i];
        com[i].name = templateStruct[i];
        printf("%d-%s  ", com[i].cps, com[i].name);
    }
    printf("\nn:%d\n", sn);
    quick_sort_struct(0, sn - 1);
    printStructArray(com, sn);

    getchar();
    getchar();
    return 0;
}