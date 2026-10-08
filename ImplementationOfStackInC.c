#include <stdio.h>
#define MAX 5
int stack[MAX], top = -1;

void push(int val)
{
    if (top == MAX - 1)
        printf("Stack Overflow \n");
    else
        stack[++top] = val;
}

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
        top--;
}
int peek()
{
    if (top != -1)
        return stack[top];
    return -1; // indicates stack is empty
}

int isFull()
{
    return top== MAX-1;
}

int isEmpty()
{
    return top == -1;
}
int main()
{
    push(10);
    push(20);
    push(30);

    printf("Top element: %d\n", stack[top]);

    pop();

    printf("Top element after pop: %d\n", stack[top]);

    if (isEmpty())
        printf("Stack is Empty\n");
    else
        printf("Stack is Not Empty\n");

    if (isFull())
        printf("Stack is Full\n");
    else
        printf("Stack is Not Full\n");

    push(40);
    push(50);
    push(60);

    if (isFull())
        printf("Stack is Full\n");

    return 0;
}