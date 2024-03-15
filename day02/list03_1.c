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

 void main() {
     node* head = (node*)malloc(sizeof(node)); // HEAD 노드 = 첫>
     head->next = NULL;

     // 첫 번째 노드에 데이터 할당
     head->data = 0;

     // 새로운 노드 추가
     addNode(head, 10); // 첫번째 노드로 삽입
     addNode(head, 20); // 두번재 노드로 삽입
     addNode(head, 30);
     addNode(head, 40);
     addNode(head, 50);

     node* curr = head->next;

     while (curr != NULL) {
    	printf("Data of the node: %d\n", curr->data);
    	curr = curr->next;
      }

     // 메모리 해제
     free(head->next); // 추가된 노드의 메모리 해제
     free(head); // HEAD 노드의 메모리 해제
}
