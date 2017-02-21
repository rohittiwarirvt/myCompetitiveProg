/*
 * http://quiz.geeksforgeeks.org/queue-set-1introduction-and-array-implementation/
 */
#include <iostream>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

using namespace std;

struct Queue {
  int front, rear, size;
  unsigned capacity;
  int * array;
};

struct Queue* createQueue(unsigned capacity) {
  struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
  queue->capacity = capacity;
  queue->front = queue->size =0;
  queue->rear = capacity-1;
  queue->array = (int *) malloc(sizeof(int)*queue->capacity);
};


int isFull(struct Queue* queue) {
  return (queue->size == queue->capacity);
}

int isEmpty(struct Queue* queue) {
  return (queue->size == 0);
}

void enqueue(struct Queue * queue, int item) {
  if(isFull(queue)) {
    //fprintf(stderr, "Queu is full so cann ot enquen the item");
  }
  queue->rear = (queue->rear + 1) % queue->capacity;
  queue->array[queue->rear] = item;
  queue->size = queue->size + 1;
}

int dequeue(struct Queue * queue) {
  if (isEmpty(queue)) {
    //fprint(stderr, "Queue is empty so can't dequeue any further");
  }
  int item = queue->array[queue->front];
  queue->front = (queue->front +1 ) % queue->capacity;
  queue->size = queue->size - 1;
  return item;
}


int front(struct Queue* queue) {
  if (isEmpty(queue)) {
//    fprint(stderr, "Quee is empty so can't return front");
  }

  return queue->array[queue->front];
}

int rear(struct Queue * queue) {
  if ( isEmpty(queue)) {
//    fprint(stderr, "Queue is empty so can't return the reart");
  }

  return queue->array[queue->rear];
}

int main()
{
    struct Queue * queue = createQueue(1000);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    printf("%d dequeued from queue\n", dequeue(queue));
    printf("Front item is %d", front(queue));
    printf("Rear item is %d", rear(queue));
    return 0;
}
