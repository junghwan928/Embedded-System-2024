int isin(int*, int, int);

void main()
{
    int ary[] = {3, 5, 2, 4, 9, 8, 1};
    int size = sizeof(ary) / sizeof(int); // 배열 개수 구하기
    int result = isin(ary, size, 9); // 배열의 요소 값 '9'를 찾고자 함

    if(result == -1) printf("찾는 원소가 없습니다!\n");
    else {
        printf("찾은 인덱스 : %d\n", result);
    }
}

int isin(int* ary, int size, int num)
{
    for(int i = 0; i < size; i++) {
        if(ary[i] == num) {
            return i;
        }
    }
    return -1;
}
