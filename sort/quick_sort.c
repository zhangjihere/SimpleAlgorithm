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

void quick_sort(int i, int j) {
    if (i == j) {
        return;
    }
    int pivt = num[i], pivtpos = i, endpos = j;
    int jnum = num[j], jpos = j, pi = 0;
    int inum = num[i], ipos = i, pj = 0;
    while (i < j) {
        for (;; j--) {
            if (i < j) {
                jnum = num[j];
                jpos = j;
                if (pivt < num[j]) {
                    continue;
                }
                pj = 1;
                break;
            }
            j++;
            break;
        }
        for (;; i++) {
            if (i < j) {
                inum = num[i];
                ipos = i;
                if (num[i] < pivt) {
                    continue;
                }
                pi = 1;
                break;
            }
            i--;
            break;
        }
        if (pi == 1 & pj == 1) {
            num[jpos] = inum;
            num[ipos] = jnum;
        } else if (pi == 0 & pj == 0) {
            return;
        } else if (pi == 0 & pj == 1) {
            num[pivtpos]=jnum;
            num[jpos] = pivt;
        }
        pi = 0;
        pj = 0;
    }

//    int temp = num[ipos];
//    num[ipos] = pivt;
//    num[pivtpos] = temp;

    quick_sort(pivtpos, ipos - 1);
    quick_sort(ipos + 1, endpos);
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