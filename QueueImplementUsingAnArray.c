// Implement the static queue using C (structure)
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
typedef struct {
int data[MAX_SIZE];
int front;
int rear;
} Queue;
void initializeQueue(Queue *q) { q->front = -1; q->rear = -1; }
int isEmpty(Queue *q) { return q->front == -1 || q->front > q->rear; }
int isFull(Queue *q) { return q->rear == MAX_SIZE - 1; }

void enqueue(Queue *q, int value) {
if (isFull(q)) {
printf("Queue is full. Cannot enqueue %d\n", value);
return;
}
if (isEmpty(q)) {
q->front = 0; // Reset the front pointer
}
q->data[++q->rear] = value;
printf("Enqueued %d\n", value);
}
int dequeue(Queue *q) {
if (isEmpty(q)) {
printf("Queue is empty. Cannot dequeue.\n");
return -1;
}
int value = q->data[q->front++];
if (q->front > q->rear) { // Reset the queue when empty
q->front = q->rear = -1;
}
printf("Dequeued %d\n", value);
return value;
}
void display(Queue *q) {
if (isEmpty(q)) {
printf("Queue is empty.\n");
return;
}
printf("Queue elements: ");
for (int i = q->front; i <= q->rear; i++) {
printf("%d ", q->data[i]);
}
printf("\n");
}
int main() {
Queue q;
initializeQueue(&q);
enqueue(&q, 10); enqueue(&q, 20); enqueue(&q, 30); enqueue(&q, 40);
enqueue(&q, 50);
enqueue(&q, 60); // attempt to add beyond capacity
display(&q);
dequeue(&q); dequeue(&q);
display(&q);
enqueue(&q, 60); // attempt to add after dequeue (won't work without shifting elements)
display(&q);
return 0;
}
