#include<stdio.h>
#include<stdlib.h>
#define max_size 5

struct queue
{
    int q[max_size];
    int front ,rear;
};

typedef struct queue QUEUE;

void insert(QUEUE *qu,int item);
void delete(QUEUE *qu);
void display(QUEUE *qu);

int main()
{
    QUEUE Q;
    Q.front =0;
    Q.rear = -1;
    for(;;)
  {
   printf("\n1: Insert\n");
   printf("\n2: Delete\n");
   printf("\n3: Display\n");
   printf("\n4: Exit\n");
   printf("Enter your choice\n");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1: if(Q.rear==max_size-1)
            {
              printf("\nQueue Overflow\n");
              return 0;
            } 
            printf("\nEnter the element\n");
           scanf("%d",&ele);
           insert(&Q,ele);
           break;
        case 2: delete(&Q);
                break;
        
        case 3: display(&Q);
                break;
         default: exit(0);
    }
    }
}

void insert(QUEUE * qu , int item)
{
  if(qu->rear== max_size-1)
  {
    printf("queue overlfow\n");
    return;
  }
   else
   {
     qu->rear = qu->rear +1;
     qu->q[qu->rear] = item;
   }
}

void delete(QUEUE *qu)
{
  int item;
  if(qu->front>qu->rear)
  {
    printf("queue is empty\n");
    return;
  }
  else
  {
    item = qu->q[qu->front];
    qu->front = qu->front+1;
    printf("the deleted item is %d",item);
  }
}

void display(QUEUE *qu)
{
  if(qu->front>qu->rear)
  {
    printf("queue is empty\n");
    return;
  }
  int i;
  for(i=qu->front;i<=qu->rear;i++)
  {
    printf("%d\t",qu->q[i])
  }
}



