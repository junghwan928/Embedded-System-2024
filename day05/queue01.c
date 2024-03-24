#include <stdio.h>
#include <stdlib.h>
#define QSIZE 10
 
typedef struct {
    int front;
    int rear;
    char queue[QSIZE];
}queue;

// 함수선언
queue*create();
void enqueue(queue*, char);
char dequeue(queue*);
void printQueue(queue*);
int isEmpty(queue*);
int isFull(queue*);

void main()
{
    queue* qa = create();
    enqueue(qa, 'A');
    enqueue(qa, 'B');
    enqueue(qa, 'C');
    enqueue(qa, 'D');

    printQueue(qa);

    printf("dequeue : %c\n", dequeue(qa)); // A
    printf("dequeue : %c\n", dequeue(qa)); // B

    printQueue(qa); // C, D
}

queue* create()
{
    queue* q = (queue*)malloc(sizeof(queue));
    if(q == NULL) exit(1);
    q->front = -1;
    q->rear = -1;
    return q;
}

void enqueue(queue* pq, char value)
{
    if(pq->rear >= QSIZE - 1) {
        printf("queue overflow!!\n");
    }
    else {
        pq->queue[++(pq->rear)] = value;
        printf("enqueue : %c\n", pq->queue[pq->rear]);
    }
}

char dequeue(queue* pq)
{
    if(pq->front == pq->rear) {
        printf("queue underflow!!\n");
        return -1;
    }
    else {
        return pq->queue[++(pq->front)];
    }
}

void printQueue(queue* pq)
{
    for(int i = pq->front+1; i <= pq->rear; i++) {
        printf("queue : %c\n", pq->queue[i]);
    }
}

/*
int isEmpty(queue* pq)
{
    if(pq->rear == pq->front) {
        printf("queue is empty!!\n");
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(queue* pq)
{
    if(pq->rear == QSIZE - 1) {
        printf("queue is full!!\n");
        return 1;
    }
    else {
        return 0;
    }
}
*/
