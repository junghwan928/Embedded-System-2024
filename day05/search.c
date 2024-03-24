/*
순차 탐색
*/

#include <stdio.h>

void main() {
    int ary[] = {3, 5, 2, 4, 9, 8, 1};
    int size = sizeof(ary) / sizeof(ary[0]); // 배열의 크기 계산
    int target = 9; // 찾을 원소
    int ridx = -1; // 원소의 인덱스를 저장할 변수, 초기값은 -1로 설정
    
    // 주어진 배열에서 원하는 원소를 찾는 코드
    for (int i = 0; i < size; i++) {
        if (ary[i] == target) {
            ridx = i; // 원소를 찾은 경우 해당 인덱스 저장
            break; // 원소를 찾았으므로 더 이상 반복할 필요 없음
        }
    }
    
    // 원소를 찾은 경우 해당 인덱스를 출력하고, 찾지 못한 경우 메시지 출력
    if (ridx == -1)
        printf("찾는 원소가 없습니다.\n");
    else
        printf("원소 %d은(는) 배열의 인덱스 %d에 있습니다.\n", target, ridx);
}
