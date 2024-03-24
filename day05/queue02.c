#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
    int data;
    struct NODE* link;
}node;

typedef struct {
    node* rear;
    node* front;
}linkQ;

linkQ* createLinkQ();
void enQueue(linkQ*, int);

void main()
{
    linkQ* q = createLinkQ();
    enQueue(q, 10);
}

linkQ* createLinkQ()
{
    linkQ* lq = (linkQ*)malloc(sizeof(linkQ));
    if(lq == NULL) {
        printf("메모리 할당 실패!!\n");
    }
    lq->front = NULL;
    lq->rear = NULL;
    return lq;
}

void enQueue(linkQ* alq, int data)
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->link = NULL;

    if(alq->front == NULL) { // 큐가 비어있는 경우
        alq->front = newNode; // 공백 상태일 때, front와 rear는 새로운 노드를 가리킴
        alq->rear = newNode;
    }
    else { // 큐가 비어있지 않은 경우
        alq->rear->link = newNode;
        alq->rear = newNode;
    }
}

void deQueue(linkQ* alq)
{
    node* curr = alq->front;
    alq->front = alq->front->link;
    printf("dq: %d\n", curr->data);
    free(curr);
}
