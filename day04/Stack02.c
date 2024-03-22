#include <stdio.h>
#define STACK_SZ 10

// 스택 구조체 정의
typedef struct STACK {
    int buf[STACK_SZ]; // 스택의 데이터를 저장할 배열
    int top;           // 스택의 맨 위 요소의 인덱스를 나타내는 변수
} stack;

// 스택이 가득 찼는지 확인하는 함수 (isFull)
void isFull(stack* pskt) {
    if (pskt->top == STACK_SZ - 1)
        printf("Stack is full!\n");
    else
        printf("Stack is not full.\n");
}

// 스택이 비어있는지 확인하는 함수 (isEmpty)
void isEmpty(stack* pskt) {
    if (pskt->top == -1)
        printf("Stack is empty!\n");
    else
        printf("Stack is not empty.\n");
}

// 스택에 값을 추가하는 함수 (push)
void push(stack* pskt, int value) {
    if (pskt->top == STACK_SZ - 1)
        printf("Stack Overflow!\n");
    else {
        pskt->buf[++(pskt->top)] = value;
        printf("Pushed %d into the stack.\n", value);
    }
}

// 스택에서 값을 제거하고 출력하는 함수 (pop)
void pop(stack* pstk) {
    if (pstk->top == -1)
        printf("Stack Underflow!\n");
    else
        printf("Popped %d from the stack.\n", pstk->buf[(pstk->top)--]);
}

void main() {
    stack s;

    // 스택에 값 추가
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    // 스택에서 값 제거하고 출력
    pop(&s);
    pop(&s);
}
/*
Stack Overflow와 Stack Underflow 처리:
 스택이 가득 찼을 때와 비어있을 때의 오류 처리를 구현하여 스택의 안정성을 높입니다.

push 함수의 주요 기능:
push() 함수에서 스택이 가득 찼는지 확인하고, 가득 차지 않았다면 값을 스택에 추가합니다.

pop 함수의 주요 기능: pop() 함수에서 스택이 비어있는지 확인하고,
 비어있지 않다면 가장 최근에 추가된 값을 스택에서 제거하고 반환합니다.
*/
