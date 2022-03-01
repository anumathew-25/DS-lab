/***************
Author:Anu Mathew
File  :selection.c
Date  :26/11/2021
***************/
#include<stdio.h>
int main(){
	int array[10];
	int i,j,size,min,temp,count=0;
	int space;
	space =sizeof(array)+sizeof(size)+sizeof(i)+sizeof(j)+sizeof(temp)+sizeof(min);
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
		min=i;
		count++;
		for(j=i+1;j<size;j++,count++)
		{
			if(array[j]<array[min])
			{
				count++;
				min =j;
				count++;
				}
			count++;
			}
			if (min !=i){	
				count++;
				temp=array[i];
				array[i] = array[min];
				array[min]=temp;
				count+3;
			}
			count++;
		
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
