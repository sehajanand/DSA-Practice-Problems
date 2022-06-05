# include<stdio.h>
# include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

struct stack * createStack(int size){
    struct stack *ptr;
    ptr->size=size;
    ptr->top=-1;
    ptr->arr=(int *)malloc(ptr->size*sizeof(int));
    return ptr;
;};

int  isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        printf("Stack full\n");
        return 1;
    }else{
        return 0;
    };
;};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        printf("Stack empty\n");
        return 1;
    }else{
        return 0;
    };
;};

void push(struct stack *ptr, int el){
    if(isFull(ptr)==1){
        printf("Stack overflow\n");
    }else{
        ptr->top=ptr->top+1;
        ptr->arr[ptr->top]=el;
    };
;};

void pop(struct stack *ptr){
    if(isEmpty(ptr)==1){
        printf("Stack underflow\n ");
    }else{
        ptr->top=ptr->top-1;
    };
;};

void peek(struct stack *ptr, int ind){
    printf("Element at position %d of stack is %d\n",ind,ptr->arr[ptr->top-ind+1]);
;};

void stackTop(struct stack *ptr){
    printf("Top element of stack is %d\n",ptr->arr[ptr->top]);
;};

void stackBottom(struct stack *ptr){
    printf("Bottom elemtn of stack is %d\n",ptr->arr[0]);
;};

void display(struct stack *ptr){
    for(int i=0;i<=ptr->top;i++){
        printf("%d\n",ptr->arr[i]);
    };
;};

int main(){
    struct stack *a=createStack(8);
    isEmpty(a);
    push(a,1);
    push(a,3);
    push(a,4);
    push(a,5);
    isFull(a);
    display(a);
    peek(a,3);   
    pop(a);
    display(a);
    return 0;
}