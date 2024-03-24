#include <stdio.h>

// 오름차순 정렬 함수 정의
void bubSort(int *ary, int n) {
    int temp;
    // 외부에서 주어진 배열을 버블 정렬 알고리즘을 사용하여 오름차순으로 정렬하는 함수
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++){
            if(ary[j] > ary[j+1]) { // 현재 요소가 다음 요소보다 크면
                temp = ary[j]; // 현재 요소와 다음 요소를 교환하기 위해 임시 변수에 현재 요소 저장
                ary[j] = ary[j+1]; // 다음 요소를 현재 요소로 이동
                ary[j+1] = temp; // 임시 변수에 저장된 현재 요소를 다음 요소로 이동
            }
        }
    }
}

// 배열을 출력하는 함수 정의
void printArray(int *ary, int n) {
    printf("정렬된 배열: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", ary[i]);
    }
    printf("\n");
}

// main 함수
void main() {
    int ary[] = {9, 4, 8, 15, 3, 7, 2, 1};
    int size = sizeof(ary) / sizeof(ary[0]); // 배열의 크기 계산

    // 배열 정렬
    bubSort(ary, size);

    // 정렬된 배열 출력
    printArray(ary, size);
}

/*
bubSort 함수:주어진 배열을 오름차순으로 정렬하는 함수. 버블 정렬 알고리즘을 사용함.

printArray 함수: 주어진 배열을 출력하는 함수.

main 함수: 정렬할 배열을 선언하고 정렬한 후, 정렬된 배열을 출력함.
*/
