/*
  배열 입력으로 받기
*/

 #include <stdio.h>
 #define MAX 20

 void main() {
     int arr[MAX], num, i;

     // 사용자로부터 배열의 크기를 입력받음
     printf("배열크기 입력값 (1~20): ");
     scanf("%d", &num);
     if (num < 1 || num > MAX) { // 21 이상 범위 초과라고 알려줌
         printf("범위 초과\n");
         return;
     }

     // 사용자로부터 배열의 원소들을 입력받음
     printf("배열 사이즈 %d 입력:\n", num);
     for (i = 0; i < num; i++) {
         printf("%d: ", i + 1);
         scanf("%d", &arr[i]);
     }

     // 배열을 역순으로 출력
     printf("배열의 역순:\n");
     for (i = num - 1; i >= 0; i--) {
         printf("%d ", arr[i]);
     }
     printf("\n");
 }
