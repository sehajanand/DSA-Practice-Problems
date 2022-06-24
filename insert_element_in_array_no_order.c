# include <stdio.h>
# include<stdlib.h>
struct myIntArray{
    int total_size;
    int used_size;
    int *p;
};
//Order does not matter
void insert(struct myIntArray *ptr,int el, int ind){
    if(ptr->used_size==ptr->total_size){
        printf("Array overflow\n");
    }else{
        ptr->p[ptr->used_size]=ptr->p[ind];
        ptr->p[ind]=el;
        ++ptr->used_size;
    };
;};
struct myIntArray * createArray(int tSize){
    struct myIntArray *ptr;
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
// # include<stdio.h>


// void insert(int arr[], int el, int ind, int size ,int capacity){
//     if(size==capacity){
//         printf("Element cannot be inserted.\n");
//     }
//     else{
//         arr[size]=arr[ind];
//         arr[ind]=el;
//         size+=1;
//     };
// ;};
// void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     };
//     printf("\n");
// ;};

// int main(){
//     int a[100]={1,2,4,5};
//     display(a,4);
//     insert(a,10,1,4,100);
//     display(a,4);
//     return 0;
// };
