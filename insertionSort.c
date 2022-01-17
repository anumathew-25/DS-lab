/***************************
Author:Anu Mathew
Date:14/01/2022
file:insertionSort.c
**************************/
#include<stdio.h>
int main(){
	int array[10],n,i=1,j=0,temp=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the array elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for(i=1;i<n;i++){
		temp=array[i];
		j=i-1;
	while(j>=0 && temp<array[j]){
		array[j+1]=array[j];
		j--;
	}
	array[j+1]=temp;
	}
	printf("The array after implementing insertion sort:\n");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	return 0;
	}				
