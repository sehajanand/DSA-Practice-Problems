# include <stdio.h>
# include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

struct stack * createStack(int size){
    struct stack *a;
    a=(struct stack *)malloc(sizeof(struct stack));
    a->size=size;
    a->top=-1;
    a->arr=(int *)malloc(size*sizeof(int));
    return a;
;};

void displayStack(struct stack *a){
    for(int i=0;i<a->size;i++){
        printf("%d ",a->arr[i]);
    };
    printf("\n");
;};

int isFull(struct stack *a){
    if(a->top==a->size-1){
        return 1;
    }else{
        return 0;
    };
;};

int isEmpty(struct stack *a){
    if(a->top==-1){
        return 1;
    }else{
        return 0;
    };
;};

void push(struct stack *a,int el){
    if(a->top==a->size-1){
        printf("Stack Overflow\n");
    }else{
        ++a->top;
        a->arr[a->top]=el;
    };
;};

void pop(struct stack *a){
    if(a->top==-1){
        printf("Stack Undeflow\n");
    }else{
        -- a->top;
    };
;};

int peek(struct stack *a,int ind){
    int arrInd=a->top-ind+1;
    return a->arr[arrInd];
;};
//top+1-ind-1+2
int main(){

}