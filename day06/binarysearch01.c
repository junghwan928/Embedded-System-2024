#include <stdio.h>

void binary(int *ary, int size, int target)
{
    int first = 0;
    int last = size - 1;
    int middle;

    while (first <= last) {
        middle = (first + last) / 2;
        if (target == ary[middle]) {
            printf("%d\n", ary[middle]);
            return; // 찾은 후에는 함수를 종료합니다.
        }
        else {
            if (target > ary[middle]) first = middle + 1;
            else last = middle - 1;
        }
    }
    printf("찾는 원소가 없습니다.\n");
}

void main()
{
    int ary[] = {2, 4, 6, 8, 10, 12}; // 이진탐색은 정렬이 되어있어야 함
    int size = sizeof(ary) / sizeof(int);
    int target = 2;

    binary(ary, size, target);
}
