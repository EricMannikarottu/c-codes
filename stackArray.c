#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr){

    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

void push(struct stack*ptr,int data){

        if (isFull(ptr)){
            printf("stack overflown\n");
        }
        else{
            ptr->top++;
            ptr->arr[ptr->top]=data;
        }
        
}

int pop(struct stack*ptr){
    if (isEmpty(ptr))       
    {
        printf("stack underflown\n");
        return -1;

    }

    else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    
}

int peek(struct stack *sp,int i){
    int arrayind= sp->top-i+1;

    if (arrayind<0)
    {
        printf("invalid position\n");

    }
    else{
        return sp->arr[arrayind];
    }
    
}

int main(){
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));

    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));

    printf("stack has been created successfully\n");

        push(sp,1);
        push(sp,2);
        push(sp,3);
        push(sp,4);
        push(sp,5);
        push(sp,6);
        push(sp,7);

        pop(sp);
        peek(sp,3);

        return 0;
}