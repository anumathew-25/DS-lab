/**********************
Author:Anu Mathew
File:polynomial.c
Date:17/12/2021
***********************/
#include<stdio.h>
int main(){
	int coeff[10],expo[10],i,t,temp;
	printf("Enter the highest degree of the polynomial: ");
	scanf("%d",&t);
	printf("Enter the degree and coefficient of polynomial in descending order:\n");
	for(i=0;i<=t;i++){
		printf("Enter the coefficient:");
		scanf("%d",&coeff[i]);
		printf("Enter the exponent:");
		scanf( "%d",&expo[i]);
	}
	printf("The polynomial that have entered:\n");
	for(i=0;i<=t;i++){
		printf("%d(x^%d)",coeff[i],expo[i]);
	
	if(i !=t){
		printf(" + ");
	}
	}
	printf("\n");
	return 0;
}		

