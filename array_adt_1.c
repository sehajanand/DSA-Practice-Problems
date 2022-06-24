
# include<stdio.h>
# include<stdlib.h>
// minimum required functionalities:- total size, used size, pointer
struct myArray{
    int totalSize;
    int usedSize;
    int *p;
};
// struct myArray * createArray(int tSize){
//     struct myArray *ptr;
//     ptr=(struct myArray *)malloc(sizeof(struct myArray));
//     ptr->total_size=tSize;
//     ptr->p=(int *)malloc(tSize*sizeof(int));
//     return ptr;
// ;};
void createArray(struct myArray *ptr,int tSize){
//     ptr=(struct myArray *)malloc(sizeof(struct myArray));
    ptr->totalSize=tSize;
    ptr->p=(int *)malloc(tSize*sizeof(int));
;};
void setElements(struct myArray *ptr,int uSize){
    ptr->usedSize=uSize;
    for(int i=0;i<uSize;i++){
        printf("Enter element %d of array.\n",i+1);
        scanf("%d",&(ptr->p[i]));
    };
;};
void displayArray(struct myArray *ptr){
    for(int i=0;i<ptr->usedSize;i++){
        printf("Element %d of array is %d.\n",i+1,ptr->p[i]);
    };
;};
int main(){
    // struct myArray a;
    // createArray(&a,10);
    // setElements(&a,5);
    // displayArray(&a);
    struct myArray *a;
    createArray(a,10);
    setElements(a,5);
    displayArray(a);
    return 0;
}
