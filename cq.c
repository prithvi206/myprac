#include<stdio.h>
#include<stdlib.h>
#define max_size 5
int count=0;

struct cirq
{
    int q[max_size];
    int front,rear;
};

typedef struct cirq CQ;


void insert(CQ *cq,int item)
{
    if((cq->front==0 && cq->rear==max_size-1)||(cq->front== cq->rear+1))
    {
        printf("queue overflow\n");
        return;
    }
    else
    {
    cq->rear = (cq->rear+1)%max_size;
    cq->q[cq->rear]= item;
    if(cq->front== -1)
    {
        cq->front = 0;
    }
    count++;
    }
}

void delete(CQ *cq)
{
    int item;
    if(cq->front == -1)
    {
        printf("queue is empty\n");
        return;
    }
    else
    {
      item = cq->q[cq->front];
      cq->front = (cq->front+1)%max_size ;
      count--;
      printf("the deleted item is %d\n",item);
    }
}

void display(CQ *cq)
{
    int i,j;
    if(cq->front==-1)
    {
        printf("queue is empty\n");
        return;
    }
    j= cq->front;
    for ( i = 1; i <= count; i++)
    {
        printf("Q[%d]=%d\t",j,cq->q[j]);
        j=(j+1)%max_size;
    }
    

}

int main()
 {
  CQ cq;
  cq.front=-1;
  cq.rear=-1;
  int ele,choice;
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
    case 1:
           if(count==max_size)
           {
             printf("\nQueue overflow\n");
             break;
           } 
           printf("\nEnter the element\n");
           scanf("%d",&ele);
           insert(&cq,ele);
           break;
    case 2: delete(&cq);
           break;
     case 3: display(&cq);
           break;
    default: exit(0);
    }
    }
  }  