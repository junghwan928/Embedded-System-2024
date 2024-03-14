#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE *next;
} node;

void addNode(node* pnode, int data) {
    // 새로운 노드 생성
    node* newNode = (node*)malloc(sizeof(node));
    if (newNode == NULL) {
        printf("메모리 할당 오류\n");
        return;
    }
    
    // 새로운 노드에 데이터 할당
    newNode->data = data;
    newNode->next = NULL;

    // pnode가 마지막 노드를 가리킬 때까지 이동
    while (pnode->next != NULL) {
        pnode = pnode->next;
    }

    // 새로운 노드를 연결
    pnode->next = newNode;
}

void main() {
    node* head = (node*)malloc(sizeof(node)); // HEAD 노드 = 첫번째 노드를 가리킨다.
    if (head == NULL) {
        printf("메모리 할당 오류\n");
        return;
    }
    head->next = NULL;

    // 첫 번째 노드에 데이터 할당
    head->data = 0;

    // 새로운 노드 추가
    addNode(head, 10);
    addNode(head, 20);

    // 추가된 노드의 데이터 출력
    printf("Data of the second node: %d\n", head->next->data);

    // 메모리 해제
    free(head->next); // 추가된 노드의 메모리 해제
    free(head); // HEAD 노드의 메모리 해제
}
