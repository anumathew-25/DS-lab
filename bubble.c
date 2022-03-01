/***************
Author:Anu Mathew
File  :bubble.c
Date  :26/11/2021
***************/
#include<stdio.h>
int main(){
	int array[10];
	int i,j,size,temp,count=0;
	int space;
	space =sizeof(array)+sizeof(size)+sizeof(i)+sizeof(j)+sizeof(temp);
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
	for(i=0;i<size-1;i++,count++)
	{
		for(j=0;j<size-i-1;j++,count++)
		{
			if(array[j]>array[j+1])
			{
				count++;
				temp=array[j];
				array[j] = array[j+1];
				array[j+1]=temp;
				count+3;
			}
			count++;
		}
	}
	printf("The sorted array is \n");
	count++;
	for(i=0;i<size;i++,count++)
	{
		printf("%d ",array[i]);
		count++;
	}
	count++;
	printf("\nTime complexity:%d",count);
	printf("\nSpace complexity:%d",space);
	return 0;
}
