//
// Created by zhangji on 3/7/18.
//

#ifndef SIMPLEALGORITHM_SORT_FUNC_H
#define SIMPLEALGORITHM_SORT_FUNC_H

#include <stdio.h>

struct company {
    char *name;
    int cps;
};

void bubble_sort(int num[], int n);
void bubble_sort_struct(struct company list[], int ln);

void quick_sort(int arr[], int n);
void quick_sort_struct(struct company com[], int n);

#endif //SIMPLEALGORITHM_SORT_FUNC_H
