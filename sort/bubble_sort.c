//
// Created by zhangji on 3/5/18.
//

#include <stdio.h>
#include "sort_func.h"

/**
 * easy_bubble_sort
 * @return
 */

int templateNum[] = {6, 1, 2, 7, 9, 3, 4, 5, 10, 8};
char *templateStruct[] = {"SS", "AA", "QQ", "GG", "EE", "JJ", "CC", "BB", "HH", "CC"};

int num[10];
int n = sizeof(num) / sizeof(num[0]);

struct company com[10];
int sn = sizeof(com) / sizeof(com[0]);

int main() {
    //sort int array
    for (int i = 0; i < n; i++) {
        num[i] = templateNum[i];
        printf("%d ", num[i]);
    }
    printf("n:%d\n", n);
    bubble_sort(num, n);
    for (int k = 0; k < n; k++) {
        printf("%d ", num[k]);
    }

    // sort struct
    printf("\n===next is struct list\n");
    for (int i = 0; i < sn; i++) {
        com[i].cps = templateNum[i];
        com[i].name = templateStruct[i];
        printf("%d-%s  ", com[i].cps, com[i].name);
    }
    printf("\nn:%d\n", sn);
    bubble_sort_struct(com, sn);
    for (int i = 0; i < sn; i++) {
        printf("%s %d\n", com[i].name, com[i].cps);
    }
    getchar();
    getchar();
    return 0;
}