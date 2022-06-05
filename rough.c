# include<stdio.h>
# include<stdlib.h>

struct myArray{
    int totalSize;
    int usedSize;
    int *ptr;
};

struct myArray * createArray( int tSize){
    struct myArray *p;
    p->totalSize=tSize;
    p->ptr=(int *)malloc(tSize*sizeof(int));
    return p;
};

void setElements(struct myArray *p, int uSize){
    p->usedSize=uSize;
    for(int i=0;i<uSize;i++){
        printf("Enter value of element indexed %d of array \n",i);
        scanf("%d",&(p->ptr[i]));
    };
;};

void displayArray(struct myArray *p){
    for(int i=0;i<p->usedSize;i++){
        printf("%d ",p->ptr[i]);
    };
;};

int main(){
    struct myArray *a=createArray(10);
    setElements(a,5);
    displayArray(a);
    return 0;
}