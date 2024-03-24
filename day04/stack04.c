// date : 2024-03-18
// desc : 스택을 배열로 구현

#include <stdio.h>
#define STACK_SZ 10
#define TRUE 1
#define FALSE 0

int stack[STACK_SZ];
int top= -1;

void push();
int pop();

void main()
{
  push(3);
  push(5);
  push(10);

  printf("%d\n", pop()); // 10
  printf("%d\n", pop()); // 5
}

int isFull()
{
  if(top >= STACK_SZ - 1) {
    return TRUE;
  }
  else {
    return FALSE;
  }
}

int isEmpty()
{
 // if(top == -1)
  if(top <= -1) { // 어떠한 상황으로 top 값이 바뀌는 경우를 생각해서 top <= -1로 잡음
    return TRUE;
  }
  else  {
    return FALSE;
  }
}

void push(int data)
{
  // if(top == STACK_SZ - 1) // isFull() 함수로 만들기
  if(isFull())
  {
    printf("stack overflow!!\n"); // 배열의 사이즈보다 많이 넣으면 오버플로우 발생
    return;
  }
  stack[++top] = data;
}

int pop()
{
  // if(top == -1) // 하나도 안채워졌다면
  if(isEmpty())
  {
    printf("stack underflow!!\n");
    return -1; // 잘못된 경우 -1을 리턴
  }
  return stack[top--];
  //top--;
}
