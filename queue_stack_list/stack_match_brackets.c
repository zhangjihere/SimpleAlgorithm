//
// Created by 张纪 on 2018-03-11.
//

#include <stdio.h>
#include <memory.h>

int checkPair(char c1, char c2) {
    if ((c1 == '(' && c2 == ')')) {
        return 1;
    }
    if ((c1 == '[' && c2 == ']')) {
        return 1;
    }
    if ((c1 == '{' && c2 == '}')) {
        return 1;
    }
    return 0;
}

int main() {
    char *brks[] = {"{[()]}", "[(])"};

    int num_str = sizeof(brks) / sizeof(*brks);
    printf("num_str=%d", num_str);
    for (int i = 0; i < num_str; i++) {
        int str_len = (int) strlen(brks[i]);
        printf("\nbrks[%d]=%s str_len=%d", i, brks[i], str_len);

        char s[101];
        for (int k = 0; k < 101; k++) {
            s[k] = '\0';
        }
        int top = 0;
        s[top] = brks[i][0];
        for (int j = 1; j < str_len; j++) {
            if (checkPair(s[top], brks[i][j])) {
                top--;
            } else {
                top++;
                s[top] = brks[i][j];
            }
        }
        printf("\ntop=%d", top);
        if (top == -1) {
            printf("\nYes, it is a closet brakets string");
        } else {
            printf("\nNo, it is not a closet brakets string");
        }
    }


}