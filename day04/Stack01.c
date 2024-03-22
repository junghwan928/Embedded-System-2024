#include <stdio.h>
#define STACK_SZ 10
#define TRUE 1
#define FALSE 0

int stack[STACK_SZ];
int top = -1;

// 스택이 가득 찼는지 확인하는 함수
void isFull() {
    if (top == STACK_SZ - 1) {
        printf("Stack is full!\n");
    } else {
        printf("Stack is not full.\n");
    }
}

// 스택이 비어있는지 확인하는 함수
void isEmpty() {
    if (top <= -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack is not empty.\n");
    }
}

// 스택에 데이터를 추가하는 함수
void push(int data) {
    if (top == STACK_SZ - 1) {
        printf("Stack Overflow!\n");
    } else {
        stack[++top] = data;
        printf("Pushed %d into the stack.\n", data);
    }
}

// 스택에서 데이터를 제거하는 함수
void pop() {
    if (top <= -1) {
        printf("Stack Underflow!\n");
    } else {
        printf("Popped %d from the stack.\n", stack[top--]);
    }
}

void main() {
    push(3);
    push(5);
    push(10);

    pop();
    pop();
}
/*
스택 오버플로우와 언더플로우 처리:
 스택이 가득 찼을 때와 비어있을 때의 오류 처리를 구현하여 스택의 안정성을 높입니다.

isFull과 isEmpty 함수의 활용:
 스택이 가득 찼는지와 비어있는지를 확인하기 위해 isFull()과 isEmpty() 함수를 사용합니다.

push 함수의 주요 기능:
 스택이 가득 찼는지 확인하고, 가득 차지 않았다면 값을 스택에 추가합니다.

pop 함수의 주요 기능:
 스택이 비어있는지 확인하고, 비어있지 않다면 가장 최근에 추가된 값을 스택에서 제거하고 반환합니다.
*/
