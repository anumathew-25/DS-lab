/**********************************************************
 * Author:Anu Mathew
 * Date  :17/01/2022
 * File  :heapSort.c
 **********************************************************/
#include<stdio.h>
void heapify(int array[10],int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && array[left] > array[largest]){
        largest=left;
    }
    if(right < n && array[right] > array[largest]){
        largest = right;
    }
    if(largest != i){
        int temp = array[i];
        array[i] = array[largest];
        array[largest] = temp;
        heapify(array,n,largest);
    }
}
void heapSort(int array[],int n){
    for(int i = n/2-1;i >= 0;i--){
        heapify(array,n,i);
    }
    for(int i = n-1;i >= 0;i--){
        int temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        heapify(array,i,0);
    }
}
void printArray(int array[],int n){
    for(int i = 0;i < n;i++){
        printf("%d ",array[i]);
    }
}
int main(){
    int array[10];
    int i,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i = 0;i < n;i++){
        scanf("%d",&array[i]);
    }
    printf("Elements in the array before Sorting:\n");
    printArray(array,n);
    heapSort(array,n);
    printf("\nElements in the array after sorting:\n");
    printArray(array,n);
    
    return 0;   

}