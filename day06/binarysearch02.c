#include <stdio.h>

int ary[] = {2, 4, 6, 8, 10, 12};
int size;

void binary(int target) {
    int first = 0;
    int last = size - 1;

    while (first <= last) {
        int middle = first + (last - first) / 2;

        if (ary[middle] == target) {
            printf("찾은 인덱스 : %d\n", middle);
            return;
        } else if (ary[middle] < target) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }

    printf("찾는 원소가 없습니다.\n");
}

void main() {
    size = sizeof(ary) / sizeof(int);
    int target = 2;

    binary(target);
}
