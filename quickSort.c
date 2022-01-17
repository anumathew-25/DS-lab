/***************************
Author:Anu Mathew
Date:14/01/2022
file:quick.c
**************************/
#include<stdio.h>
void quickSort(int array[10],int lb, int ub){
int pivot,start,end,temp;
if(lb<ub){
  pivot=lb;
  start=lb;
  end=ub;
	while(start<end){
		while(array[start]<=array[pivot] && start<ub)
		start++;
		while(array[end]>array[pivot])
		end--;
		if(start<end){
 			temp=array[start];
 			array[start]=array[end];
 			array[end]=temp;
			}
  		}
 		temp=array[pivot];
 		array[pivot]=array[end];
 		array[end]=temp;
 		quickSort(array,lb,start-1);
 		quickSort(array,end+1,ub);
	}
}

int main(){
	int array[10],n,i,j;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
        for(i=0;i<n;i++){
        	printf("\nelement[%d] :",i);
        	scanf("%d",&array[i]);
        }
	quickSort(array,0,n-1);
	printf("\nThe sorted array is : ");
        for(i=0;i<n;i++){
        	printf("%d ",array[i]);
        }
 }


