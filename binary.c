/***************
Author:Anu Mathew
File  :binary.c
Date  :26/11/2021
***************/
#include <stdio.h>
int main(){
    int i,size, first, last, middle, search, array[10],count=0;
    int space;
    space =sizeof(array)+sizeof(size)+sizeof(i)+sizeof(search)+sizeof(first)+sizeof(middle)+sizeof(last);
    printf("Enter number of elements: ");
    count++;
    scanf("%d", &size);
    count++;
    printf("Enter %d integers\n", size);
    count++;
    for (i = 0; i < size; i++,count++){
        scanf("%d", &array[i]);
        count++;
    }    
    printf("Enter value to be searched: ");
    count++;
    scanf("%d", &search);
    count++;
    first = 0;
    last = size - 1;
    middle = (first+last)/2;
    count+3;
    while (first <= last) {
        count++;
        if (array[middle] < search){
            count++;
            first = middle + 1;
            count++;
        }
        else if (array[middle] == search) {
            count++;
            printf("%d found at location %d.\n", search, middle+1);
            count++;
            break;
            count++;
        }
        else{
            count++;
            last = middle - 1;
            count++;
        }
    
    middle = (first + last)/2;
    count++;
    }
    count++;
    if (first > last){
        count++;
        printf("%d not present in this array.", search);
        count++;
    }
    count++;
    printf("\nThe time complexity is %d",count);
    printf("\nThe space complexity is %d",space);
    count++;
    return 0;
}
