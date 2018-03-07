// easy_bubble_sort
// Created by zhangji on 3/6/18.
//

#include <stdio.h>
#include "sort_func.h"
#include <string.h>

int templateNum[] = {6, 1, 2, 7, 9, 3, 4, 5, 10, 8};
char *templateStruct[] = {"SS", "AA", "QQ", "GG", "EE", "JJ", "CC", "BB", "HH", "CC"};

int num[10];
int n = sizeof(num) / sizeof(num[0]);

struct company com[10];
int sn = sizeof(com) / sizeof(com[0]);

void printNumArray(int num[], int n) {
    for (int k = 0; k < n; k++) {
        printf("%d ", num[k]);
    }
    printf("\n");
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
    quick_sort(num, n);
    printNumArray(num, n);
    printf("\n");

    // sort struct
    for (int i = 0; i < sn; i++) {
        com[i].cps = templateNum[i];
        com[i].name = templateStruct[i];
        printf("%d-%s  ", com[i].cps, com[i].name);
    }
    printf("\nn:%d\n", sn);
    quick_sort_struct(com, sn);
    printStructArray(com, sn);

    getchar();
    getchar();
    return 0;
}