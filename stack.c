/***************
Author:Anu Mathew
File  :stack.c
Date  :03/12/2021
***************/
#include<stdio.h>
int size,stack[10],top,max,operation;
void pop();
void push();
void display();
int main(){
	top=-1;
	printf("Enter the maximum size of the stack:");
	scanf("%d",&max);
	do{
	printf("\n1-push\n2-pop\n3-display\n4-exit\nSelect suitable operation\n");
	scanf("%d",&operation);
	switch(operation){
	case 1:
	{
		push();
		break;
	}
	case 2:
	{
		pop();
		break;
	}
	case 3:
	{
		display();
		break;
	}
	case 4:
	{
		printf("Exit");
		break;
	}
	default:
	{
		printf("Invalid operation!!!");
	}
	}
}
	while(operation !=4);
	return 0;
	}
	void push(){
	int item;
	if(top==max-1){
	printf("Stack is full");
	}
	else{
	printf("Enter the element: ");
	scanf("%d",&item);
	top=top+1;
	stack[top]=item;
	int i;
	printf("\nStack:\n");
	for(i=0;i<=top;i++){
		printf("%d\n",stack[i]);
	}
	}
	}
	void pop(){
	int item;
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
	item=stack[top];
	top=top-1;
	printf("Deleted element: %d",item);
	int i;
	printf("\nStack:\n");
	for(i=0;i<=top;i++){
		printf("%d\n",stack[i]);
	}
	}
	}
	void display(){
	int i;
	printf("\nStack:\n");
	for(i=0;i<=top;i++){
		printf("%d\n",stack[i]);
	}
}
