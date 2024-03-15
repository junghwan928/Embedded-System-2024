#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE *next;
} node;

void addNode(node* pnode, int data) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = pnode->next;
    pnode->next = newNode;
}

void appendNode(node* head, int data) {
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    node* current = head;
    // 리스트의 끝까지 이동
    while (current->next != NULL) {
        current = current->next;
    }
    // 새 노드를 리스트의 마지막에 추가
    current->next = newNode;
}

void freeList(node* head) {
    node* current = head;
    node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

void showNode(node* pnode) {
    if (pnode == NULL) {
        printf("노드가 비어 있습니다.\n");
    } else {
        printf("현재 Node Data: %d\n", pnode->data);
    }
}

void main() {
    node* head = (node*)malloc(sizeof(node));
    head->data = 0; // head에 데이터를 할당할 경우
    head->next = NULL;

    // 새로운 노드 추가
    appendNode(head, 10);
    appendNode(head, 20);
    appendNode(head, 30);
    appendNode(head, 40);
    appendNode(head, 50);

    node* curr = head->next;

    while (curr != NULL) {
        printf("현재 Node Data: %d\n", curr->data);
        curr = curr->next;
    }

    // 연결 리스트의 메모리 삭제
    freeList(head);

    printf("메모리 삭제완료.\n");
}
