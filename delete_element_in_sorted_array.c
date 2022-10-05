// USING SIMPLE ARRAY SYNTAX


// # include <stdio.h>
// # include<stdlib.h>

// void setElements(int array[],int uSize){
//     for(int i=0;i<uSize;i++){
//         printf("Enter the value of element indexed %d of array.\n",i);
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

// void deleteElement(int array[], int index, int uSize){
//     if(uSize==0){
//         printf("Array Underflow!");
//     }else{
//     for(int i=index;i<uSize-1;i++){
//         array[i]=array[i+1];
//     };
//     }
// ;};

// int main(){
//     int a[10];
//     setElements(a,1);
//     displayArray(a,1);
//     deleteElement(a,0,1);
//     displayArray(a,0);
//     return 0;
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
;};

void setElements(struct myArray *ptr,int uSize){
    ptr->usedSize=uSize;
    for(int i=0;i<ptr->usedSize;i++){
        printf("Enter value of element indexed %d of array.\n",i);
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

void deleteElement(struct myArray *ptr,int ind){
    if(ptr->usedSize==0){
        printf("Array Underflow");
    }else{
    for(int i=ind;i<ptr->usedSize-1;i++){
        ptr->ptr[i]=ptr->ptr[i+1];
    };
    --ptr->usedSize;
    }
;};

int main(){
    struct myArray *arr=createArray(10);
    setElements(arr,5);
    displayArray(arr);
    deleteElement(arr,1);
    displayArray(arr);
    return 0;
}