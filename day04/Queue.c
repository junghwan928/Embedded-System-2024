#include <stdio.h>

void main() {
    int ary[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int queue[20];
    int rear = 0, front = 0;    // 입구(rear)로 삽입하고, 출구(front)를 통해서 삭제한다.

    int size = sizeof(ary) / sizeof(ary[0]); // 배열 ary의 크기 계산

    // 큐에 삽입
    for (int i = 0; i < size; i++) {
        queue[rear++] = ary[i]; // 큐에 데이터 삽입 및 rear 증가
        printf("Enqueued: %d\n", ary[i]); // 삽입된 데이터 출력
    }

    // 큐에서 삭제
    for (int i = 0; i < size; i++) {
        printf("Dequeued: %d\n", queue[front++]); // 큐에서 데이터 삭제 및 출력
    }
}
/*
큐 구현:
 큐는 배열을 사용하여 구현되어 있습니다. 크기가 20인 queue 배열을 선언하여 사용합니다.

삽입과 삭제:
 큐에 데이터를 삽입할 때는 rear 인덱스를 이용하고,
 큐에서 데이터를 삭제할 때는 front 인덱스를 이용합니다.

삽입 과정:
 for 반복문을 통해 배열 ary에 있는 데이터를 순회하면서 큐에 삽입합니다.
 각 데이터가 삽입될 때마다 rear 변수가 증가하고, 삽입된 데이터가 출력됩니다.

삭제 과정: 다시 한번 for 반복문을 통해 큐에서 데이터를 삭제하고 출력합니다.
 이 때 front 변수가 증가하면서 큐의 가장 앞에 있는 데이터가 순차적으로 삭제되고 출력됩니다.
*/
