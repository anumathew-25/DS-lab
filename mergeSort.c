/**********************************************************
 * Author:Anu Mathew
 * Date  :17/01/2022
 * File  :mergeSort.c
 **********************************************************/
#include <stdio.h>  

void merge(int array[], int lb, int mid, int ub){    
    int i, j, k;  
    int n1 = mid - lb + 1;    
    int n2 = ub - mid;    
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++){
        left[i] = array[lb + i];   
    }    
    for (int j = 0; j < n2; j++){
        right[j] = array[mid + 1 + j];
    }     
    i = 0;  
    j = 0;  
    k = lb;  
    while (i < n1 && j < n2){    
        if(left[i] <= right[j]){    
            array[k] = left[i];    
            i++;    
        }    
        else{    
            array[k] = right[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1){    
        array[k] = left[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2){    
        array[k] = right[j];    
        j++;    
        k++;    
    }    
}    
void mergeSort(int array[], int lb, int ub){  
    if (lb < ub){  
        int mid = (lb + ub) / 2;  
        mergeSort(array, lb, mid);  
        mergeSort(array, mid + 1, ub);  
        merge(array, lb, mid, ub);  
    }  
}  
 
void printArray(int array[], int n)  {  
    int i;  
    for (i = 0; i < n; i++)  
    printf("%d ", array[i]);   
} 
int main(){
    int array[10];
    int n=sizeof(array)/sizeof(array[0]);
    int i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Elements in the array before Sorting:\n");
    printArray(array,n);
    mergeSort(array,0,n-1);
    printf("\nElements in the array after sorting:\n");
    printArray(array,n);
    
    return 0;  
}  






/*#include<stdio.h>

void merge(int array[],int lb,int mid,int ub){
    int i,j,k;
    int n1 = mid-lb+1;
    int n2 = ub-mid;
    int Left[n1],Right[n2];

    for(int i=0;i<n1;i++){
        Left[i]=array[lb+1];
    }
    for(int j=0;j<n2;j++){
        Right[j]=array[mid+1+j];
    }
    i=0;
    j=0;
    k=lb;
    while(i<n1&&j<n2){
        if(Left[i]<=Right[j]){
            array[k]=Left[i];
            i++;
        }
        else{
            array[k]=Right[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        array[k]=Right[j];
        j++;
        k++;
    }
    while(j<n2){
        array[k]=Left[i];
        i++;
        k++;
    } 
}
void mergeSort(int array[],int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergeSort(array,lb,mid);
        mergeSort(array,mid+1,ub);
        merge(array,lb,mid,ub);
        }
}
void printArray(int array[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
} 
int main(){
    int array[10];
    int n=sizeof(array)/sizeof(array[0]);
    int i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("Elements in the array before Sorting:\n");
    printArray(array,n);
    mergeSort(array,0,n-1);
    printf("\nElements in the array after sorting:\n");
    printArray(array,n);
    
    return 0;   
}
*/