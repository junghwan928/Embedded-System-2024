#include <stdio.h>

void binary(int *ary, int size)
{
    while(first <= last) {
        middle = (first + last) / 2;
        if(target == ary[middle]) {
            printf("%d\n", ary[middle]);
        }
        else {
            if(target > ary[middle]) first = middle + 1;
            else last = middle - 1;
        }
    }
}

int main()
{
    int ary[] = {2, 4, 6, 8, 10, 12}; // 이진탐색은 정렬이 되어있어야 함
    int size = sizeof(ary) / sizeof(int);
    int first = 0;
    int last = 0;
    int middle = 0;

    /*
    while(first <= last) {
        middle = (first + last) / 2;
        if(target == ary[middle]) {
            printf("%d\n", ary[middle]);
        }
        else {
            if(target > ary[middle]) first = middle + 1;
            else last = middle - 1;
        }
    }
    */
}
