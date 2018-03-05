//
// Created by zhangji on 3/5/18.
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
int main() {

    int num[] = {39, 21, 95, 2, 41, 54};
    int n = sizeof(num) / sizeof(num[0]);
    int temp = 0;
    printf("n:%d, temp:%d\n", n, temp);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (num[j + 1] > num[j]) {
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int k = 0; k < n; k++) {
        printf("%d ", num[k]);
    }

    // sort struct
    printf("\n===next is struct list\n");
    struct company list[3], t;

    list[0].name = "aaa";
    list[0].cps = 12;
    list[1].name = "bbb";
    list[1].cps = 32;
    list[2].name = "ccc";
    list[2].cps = 20;

    int m = sizeof(list) / sizeof(list[0]);
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (list[j + 1].cps > list[j].cps) {
                t = list[j + 1];
                list[j + 1] = list[j];
                list[j] = t;
            }
        }
    }
    for (int i2 = 0; i2 < m; i2++) {
        printf("%s %d\n", list[i2].name, list[i2].cps);
    }
    getchar();
    getchar();
    return 0;
}