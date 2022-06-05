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
# include<stdio.h>
# include<stdlib.h>

struct myArray{
    int t_size;
    int u_size;
    int *ptr;
};

void createArray(struct myArray *ptr,int tSize){
    ptr->t_size=tSize;
    ptr->ptr=(int *)malloc(tSize*sizeof(int));
};

void setVal(struct myArray *ptr, int uSize){
    ptr->u_size=uSize;
    for(int i=0;i<uSize;i++){
        printf("Enter value of element indexed %d of array\n",i);
        scanf("%d",&(ptr->ptr[i]));
    }
;};

void display(struct myArray *ptr){
    for(int i=0;i<ptr->u_size;i++){
        printf("%d ",ptr->ptr[i]);
    }
    printf("\n");
;};

void insert(struct myArray *ptr, int ind, int el){
    for(int i=ptr->u_size-1;i>=ind;i--){
        ptr->ptr[i+1]=ptr->ptr[i];
    };
    ptr->ptr[ind]=el;
    ptr->u_size=ptr->u_size+1;
;};

int main(){
    struct myArray arr;
    createArray(&arr, 100);
    setVal(&arr, 7);
    display(&arr);
    insert(&arr, 3, 9999);
    display(&arr);
    return 0;
}