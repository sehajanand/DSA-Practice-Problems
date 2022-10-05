// USING SIMPLE ARRAY SYNTAX:-

// # include <stdio.h>
// # include <stdlib.h>

// void setElements(int array[],int uSize){
//     for(int i=0;i<uSize;i++){
//         printf("Enter value of element indexed %d of array.\n",i);
//         scanf("%d",&array[i]);
//     };
// ;};

// void displayArray(int array[], int uSize){
//     printf("{");
//     for(int i=0;i<uSize;i++){
//         printf("%d,",array[i]);
//     };
//     printf("}\n");
// ;};

// void insertElement(int array[],int index, int uSize, int el){
//     array[uSize]=array[index];
//     array[index]=el;
// ;};

// int main(){
//     int a[10];
//     setElements(a,5);
//     displayArray(a,5);
//     insertElement(a,1,5,99);
//     displayArray(a,6);
// }

// USING ARRAY ADT:-

# include<stdio.h>
# include<stdlib.h>

struct myArray{
    int totalSize;
    int usedSize;
    int *ptr;
};

struct myArray* createArray(int tSize){
    struct myArray *ptr;
    ptr=(struct myArray *)malloc(sizeof(struct myArray));
    ptr->totalSize=tSize;
    ptr->ptr=(int *)malloc(tSize*sizeof(int));
    return ptr;
;};

void setElements(struct myArray *ptr, int uSize){
    ptr->usedSize=uSize;
    for(int i=0;i<uSize;i++){
        printf("Enter value of element indexed %d of array",i);
        scanf("%d",&(ptr->ptr[i]));
    };
;};

void displayArray(struct myArray *ptr){
    printf("{");
    for(int i=0;i<ptr->usedSize;i++){
        printf("%d,",ptr->ptr[i]);
    };
    printf("}\n");
;};

void insertElement(struct myArray *ptr,int index,int el){
    if(ptr->usedSize==ptr->totalSize){
        printf("Array overflow!");
    }else{
    ptr->ptr[ptr->usedSize]=ptr->ptr[index];
    ptr->ptr[index]=el;
    ++ ptr->usedSize;
    }
;};

int main(){
    struct myArray *arr=createArray(10);
    setElements(arr,5);
    displayArray(arr);
    insertElement(arr,1,99);
    displayArray(arr);
    return 0;
}