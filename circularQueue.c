/**********************
Author:Anu Mathew
File:circularQueue.c
Date:10/12/2021
***********************/
#include<stdio.h>
#define MAX 3
void insert();
int delete();
void display();
int front = -1,rear = -1;
int queue[MAX];
int main(){
    int operation;
        do{
            printf("\n\n1.Enqueue\n2.Dequeue\n3.Exit\nEnter the operation:");
            scanf("%d",&operation);
            if(operation==1){
            insert();
            display();
        }
        else if(operation==2){
            delete();
            display();
        }
        else if(operation==3){
            printf("Exit\n");
        }
        else{
        	printf("Invalid operation!!");
        	}

    }
    while(operation !=3);
    }
int isFull(){
    if((front == rear+1) || (front==0 && rear == MAX-1))
        return 1;
        return 0;
}


int isEmpty(){
    if(front==-1)
        return 1;
        return 0;

}
void insert(){
    int element;
    printf("Enter the element:");
    scanf("%d",&element);
    if(isFull()){
        printf("\nQueue is full\n");
    }
    else{
        if(front==-1)
        front=0;
        rear=(rear+1)%MAX;
        queue[rear]= element;
    }
}


int delete(){
    int element;
    if (isEmpty()){
        printf("Queue is empty\n");
        return(-1);
    }
    else{
        element = queue[front];
        if(front == rear){
            front = -1;
            rear = -1;
        }
    else{
        front=(front + 1) % MAX;
    }
    printf("\nDeleted element:%d\n",element);
    return(element);
    }
}
void display(){
    int i;
    if(isEmpty())
    printf(" ");

    else{
        printf("Queue:");
        for(i=front; i !=rear; i=(i+1)%MAX){
            printf("%d ",queue[i]);
        }
        printf("%d",queue[i]);
    }
}
