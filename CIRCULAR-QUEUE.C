#include<stdio.h>
#include<stdlib.h>


struct circularqueue
{
    int size ;
    int f;
    int r;
    int * arr;
};

int isEmpty(struct circularqueue * q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct circularqueue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct circularqueue *q,int val){
    if(isFull(q)){
        printf("This queue is Full \n");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
        printf("enqued element : %d \n",val);
    }
}

int dequeue(struct circularqueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This queue is empty \n");
    }
    else{
        q->f=(q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}


int main(){
    struct circularqueue q ;
    q.size = 4;
    q.f = q.f = 0;
    q.arr = (int*)malloc(q.size*sizeof (int));

    //enqueue few elements
    enqueue(&q,12);
    enqueue(&q,15);
    enqueue(&q,33);
    //enqueue(&q,45);
    printf("dequeuing elements %d \n",dequeue(&q));
    printf("dequeuing elements %d \n",dequeue(&q));
    printf("dequeuing elements %d \n",dequeue(&q));
    //enqueue(&q,12);
    //enqueue(&q,12);
    //enqueue(&q,12);


    if(isEmpty(&q)){
        printf("queue is empty \n");
    }

    if(isFull (&q)){
        printf("queue is Full \n");
    }

    return 0;
}
