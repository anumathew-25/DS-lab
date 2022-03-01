/**********************
Author:Anu Mathew
File:queue.c
Date:10/12/2021
***********************/
#include<stdio.h>
#define MAX 5
void insert();
void delete();
void display();
int front=-1,rear=-1;
int queue[MAX];
int main(){
	int operation;
do{
	printf("\n1.Enqueue\n2.Dequeue\n3.Exit\n\nEnter the operation:\n");
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
	printf("Exit");
	}
	else{
	printf("Invalid operation!!!");
	}
}
while(operation !=3);
	
}

void insert(){
	int item;
	printf("Enter the element:\n");
	scanf("%d",&item);
	
	if(front==-1&&rear==-1){
	front=0;
	rear=0;
	}
	else{
	rear =rear+1;
	}
	queue[rear]=item;
	}
void delete(){
	int item;
	if(front==-1||front>rear){
		printf("Queue is empty\n");
		
	}
	else{
	item=queue[front];
	if (front==rear){
	front=-1;
	rear=-1;
	}
	else{
	front=front+1;
	}
	}
	}
void  display(){
	int i;
	if(rear==-1){
	printf("Queue is empty\n");
	}
	
	else{
	printf("Queue:\n");
	for(i=front;i<=rear;i++){
		printf("%d\t",queue[i]);
		}
	}	
}


