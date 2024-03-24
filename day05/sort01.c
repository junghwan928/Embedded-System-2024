#include <stdio.h>

// 오름차순 정렬 함수 정의
void bubSort(int *ary, int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) { // 배열의 크기보다 1 작은 범위까지 반복
        for(int j = 0; j < n - 1; j++){ // 현재 요소부터 배열의 끝까지 반복
            if(ary[j] > ary[j+1]) { // 현재 요소가 다음 요소보다 크면
                temp = ary[j]; // 현재 요소와 다음 요소를 교환하기 위해 임시 변수에 현재 요소 저장
                ary[j] = ary[j+1]; // 다음 요소를 현재 요소로 이동
                ary[j+1] = temp; // 임시 변수에 저장된 현재 요소를 다음 요소로 이동
            }
        }
    }
}

void main(void) {
    int ary[] = {9, 4, 8, 15, 3, 7, 2, 1};
    int size = sizeof(ary) / sizeof(ary[0]); // 배열의 크기 계산
    bubSort(ary, size); // 오름차순 정렬 함수 호출
    
    // 정렬된 배열 출력
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", ary[i]);
    }
    printf("\n");
}

/*
bubSort 함수:
주어진 배열을 오름차순으로 정렬하는 함수. 버블 정렬 알고리즘을 사용함. 
각 반복에서 현재 요소와 다음 요소를 비교하여 정렬함.

main 함수:
 정렬할 배열을 선언하고 배열의 크기를 계산한 후,
 bubSort 함수를 호출하여 배열을 오름차순으로 정렬함.
*/
