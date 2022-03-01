/***************
Author:Anu Mathew
File  :linear.c
Date  :26/11/2021
***************/
#include<stdio.h>
int main(){
	int array[10];
	int i,size,value,count=0;
	int flag=0;
	int space;
	space =sizeof(array)+sizeof(size)+sizeof(i)+sizeof(value)+sizeof(flag);
	printf("Enter the size of array: ");
	count++;
	scanf("%d",&size);
	count++;
	printf("Enter the elements in the array:\n");
	count++;
	for(i=0;i<size;i++,count++)
	{
		scanf("%d",&array[i]);
		count++;
	}
	printf("Enter the value to be searched: ");
	count++;
	scanf("%d",&value);
	count++;
	for(i=0;i<size;i++,count++){
		if(array[i]==value){
		count++;
		flag=1;
		count++;
		printf("The %d found at %d",value,i+1);
		count++;
		}
		count++;
	}
	if( flag==0){
	count++;
	printf("The %d not found",value);
	count++;
	}
	count++;
	printf("\nTime complexity:%d",count);
	printf("\nSpace complexity:%d",space);
	return 0;
	}

