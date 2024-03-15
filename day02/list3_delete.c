#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE *next;
} node;

void addNode(node* pnode, int data) {
     // 새로운 노드 생성
     node* newNode = (node*)malloc(sizeof(node));
     // 새로운 노드에 데이터 할당
     newNode->data = data;
     newNode->next = pnode->next;
     // 새로운 노드를 연결
     pnode->next = newNode;
}

void freeList(node* head) {
    node* current = head->next;
    node* next;
     // 현재 노드를 순회하면서 메모리를 해제하고.
    while (current != NULL) {
        next = current->next; // 현재 노드의 다음 노드를 저장한>
        free(current); // 현재 노드의 메모리를 해제하고.
        current = next; // 다음 노드로 이동.
    }

    // 모든 노드를 해제한 후에 HEAD 노드 해제
     free(head);
}

void deleteNode(node* head) {
    node* current = head->next; // 첫 번째 노드부터 시작합니다.
    node* next;

    // 첫 번째 노드부터 순서대로 삭제합니다.
    while (current != NULL) {
        next = current->next; // 현재 노드의 다음 노드를 저장한 다음.
        free(current); // 현재 노드의 메모리를 해제합니다.
	printf("%d\n",current->data);
        current = next; // 다음 노드로 이동합니다.
    }

    // HEAD 노드의 다음 노드를 NULL로 설정하여 모든 노드가 삭제되었음을 표시합니다.
    head->next = NULL;
}

void main() {
    node* head = (node*)malloc(sizeof(node)); // HEAD 노드
    head->next = NULL;

     // 첫 번째 노드에 데이터 할당
     head->data = 0;

     // 새로운 노드 추가
     addNode(head, 10); // 첫번째 노드로 삽입
     addNode(head, 20); // 두번째 노드로 삽입
     addNode(head, 30);
     addNode(head, 40);
     addNode(head, 50);

    node* curr = head->next;

   while (curr != NULL) {
        printf("현재 Node Data: %d\n", curr->data);
        curr = curr->next;
     }

     // 연결 리스트의 메모리 삭제
   freeList(head);

   printf("메모리 삭제완료.\n");
 }
