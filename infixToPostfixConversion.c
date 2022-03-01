/**********************
Author:Anu Mathew
File:infixToPostfixConversion.c
Date:17/12/2021
***********************/
#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char a)
{
    stack[++top] = a;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char a)
{
    if(a == '(')
        return 0;
    if(a == '+' || a == '-')
        return 1;
    if(a == '*' || a == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100];
    char *e, a;
    printf("Enter the expression : ");
    scanf("%s",exp);
    printf("\n");
    e = exp;
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((a = pop()) != '(')
                printf("%c ", a);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}

