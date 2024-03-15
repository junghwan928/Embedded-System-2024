#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE *next;
} node;

void main() {
    node* head = (node*)malloc(sizeof(node)); // HEAD 노드 = 첫번째 노드를 가리킨다.
    head->next = NULL;

    node* node1 = (node*)malloc(sizeof(node)); // 첫번째 노드
    node1->data = 10;
    node1->next = NULL;
    head->next = node1;

    node* node2 = (node*)malloc(sizeof(node)); // 두번째 노드
    node2->data = 20;
    node2->next = NULL;
    node1->next = node2;                // 두번째노드를 연결한다.

    node* node3 = (node*)malloc(sizeof(node));
    node3->data = 30;
    node3->next = NULL;
    node2->next = node3;

    // curr 노드를 첫 번째 노드로 이동
    node* curr = head->next;
    printf("Current Node Data: %d\n", curr->data);

    while (curr->next != NULL) {
        curr = curr->next;
    }

    // curr 노드의 data와 next를 출력
    printf("Current Node Data: %d\n", curr->data);
    printf("Next Node: %p\n", (void *)curr->next);

    // 메모리 해제
    free(node1);
    free(node2);
    free(node3);
}
