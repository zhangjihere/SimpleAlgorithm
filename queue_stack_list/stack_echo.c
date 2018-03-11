//
// Created by 张纪 on 2018-03-11.
//

#include <stdio.h>
#include <memory.h>

// test palindrome or not, for example "ahaha" is YES
int main() {
    char a[101], s[101];
    gets(a);// ahaha
    int len = (int) strlen(a);
    int mid = len / 2 - 1;// the last char index of the pre-half substring
    printf("len=%d, mid=%d", len, mid);
    int top = -1;
    for (int i = 0; i <= mid; i++) {
        top++;
        s[top] = a[i];
    }

    int j = 0;
    if (len % 2 == 0) {
        j = mid + 1;// len is even number
    } else {
        j = mid + 2;// len is odd number
    }
    for (; j < len && s[top] == a[j]; j++, top--) {
    }
    if (top == -1) {
        printf("\nYes, %s is palindrome number", a);
    } else {
        printf("\nNo, %s is not palindrome number", a);
    }

    return 0;
}