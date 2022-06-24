// # include<stdio.h>

// void insert(int arr[], int el, int ind, int capacity, int size){
//     if(size==capacity){
//         printf("Element cannot be inserted.\n");
//     }else{
//         for(int i=size-1;i>=ind;i--){
//             arr[i+1]=arr[i];
//         };
//         arr[ind]=el;
//     };
// ;};

// void displayArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     };
//     printf("\n");
// ;};
// int main(){
//     int a[100]={1,2,3,4};
//     displayArray(a,4);
//     insert(a,10,4,100,4);
//     //new size
//     displayArray(a,5);
//     printf("%d",a[4]);
//     return 0;
// }
# include <stdio.h>
# include<stdlib.h>
struct myIntArray{
    int total_size;
    int used_size;
    int *p;
};
//order matters

void insert(struct myIntArray *ptr, int el, int ind){
    for (int i=ptr->used_size-1;i>=ind;i--){
        ptr->p[i+1]=ptr->p[i];
    };
    ptr->p[ind]=el;
    ++ptr->used_size;
;};


struct myIntArray * createArray(int tSize){
    struct myIntArray *ptr;
    ptr=(struct myIntArray *)malloc(sizeof(struct myIntArray));
    ptr->total_size=tSize;
    ptr->p=(int *)malloc(tSize*sizeof(int));
    return ptr;
;};

void setVal(struct myIntArray *ptr,int uSize){
    ptr->used_size=uSize;
    for(int i=0;i<uSize;i++){
        printf("Enter value of element indexed %d of array\n",i);
        scanf("%d",&(ptr->p[i]));
    };
;};

void displayArray(struct myIntArray *ptr){
    for(int i=0;i<ptr->used_size;i++){
        printf("%d ",ptr->p[i]);
    };
    printf("\n");
;};

int main(){
    struct myIntArray *a=createArray(10);
    setVal(a,5);
    displayArray(a);
    insert(a,8,5);
    displayArray(a);
    return 0;
}