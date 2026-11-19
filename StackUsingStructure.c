#include <stdio.h>
#include <stdlib.h>
#define MAX 100
// Stack structure
typedef struct
{
    int data[MAX];
    int top;
} Stack;
void initStack(Stack *s)
{
    s->top = -1;
}
int isEmpty(Stack *s)
{
    return s->top == -1;
}
int isFull(Stack *s)
{
    return s->top == MAX - 1;
}
void push(Stack *s, int value)
{
    if (isFull(s))
    {
        printf("Stack Overflow \n");
        exit(1);
    }
    s->data[++(s->top)] = value;
}
int pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow \n");
        exit(1);
    }
    return s->data[(s->top)--];
}
int main()
{
    Stack stack;
    initStack(&stack);
    push(&stack, 10);
    push(&stack, 20);
    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));
    return 0;
}