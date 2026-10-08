#include <stdio.h>

#define MAX 5

int stack[MAX], top = -1;

void push(int val)
{
    if (top == MAX - 1)
        printf("Stack Overflow\n");
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

    return -1;
}

int isFull()
{
    return top == MAX - 1;
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

    pop();

    push(40);

    printf("Top element: %d\n", peek());

    if (isEmpty())
        printf("Stack is Empty\n");

    if (isFull())
        printf("Stack is Full\n");

    return 0;
}
