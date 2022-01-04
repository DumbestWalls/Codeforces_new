#include<stdio.h>
#define maxsize 100
int stack[maxsize];
int top=-1;

void push(int element){
    if(top == maxsize-1)
    {
        printf("OVERFLOW\n");
    }
    else{
        top = top +1;
        stack[top] = element;
    }
}

void pop(){
    if(top == -1)
    {
        printf("UNDERFLOW\n");
    }
    else{
        int deletedElement;
        deletedElement = stack[top];
        top = top -1;
    }
}