# include<stdio.h>

// int sizeArray(int a[]){
//     int size=0;
//     for(int i=0; i;i++){
//       if(a[i]==0){
//           break;
//       };
//       size++;
//     };
//     return size;
// ;};
void insert(int arr[], int el, int ind, int size ,int capacity){
    if(size==capacity){
        printf("Element cannot be inserted.\n");
    }
    else{
        arr[size]=arr[ind];
        arr[ind]=el;
        size+=1;
    };
;};
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    };
    printf("\n");
;};

int main(){
    int a[100]={1,2,4,5};
    display(a,4);
    insert(a,10,1,4,100);
    display(a,4);
    return 0;
};
// # include<stdio.h>
// # include<stdlib.h>

// struct myArray{
//     int t_size;
//     int u_size;
//     int *ptr;
// };

// void createArray(struct myArray *ptr, int tSize ){
//     ptr->t_size=tSize;
//     ptr->ptr=(int *)malloc(tSize*sizeof(int));
// ;};

// void setVal(struct myArray *ptr, int uSize){
//     ptr->u_size=uSize;
//     for(int i=0;i<uSize;i++){
//         printf("Enter value of element indexed %d of the array.\n",i);
//         scanf("%d",&(ptr->ptr[i]));
//     };
// ;};

// void display(struct myArray *ptr){
//     for(int i=0;i<ptr->u_size;i++){
//         printf("%d ",ptr->ptr[i]);
//     };
// ;}; 

// void insert(struct myArray *ptr, int ind, int el){
//     if(ptr->u_size>=ptr->t_size){
//         printf("Insertion failed\n");
//     }else{
//         ptr->ptr[ptr->u_size]=ptr->ptr[ind];
//         ptr->ptr[ind]=el;
//     }
//     ptr->u_size=ptr->u_size+1;
// ;};

// int main(){
//     struct myArray arr;
//     createArray(&arr, 15);
//     setVal(&arr,10);
//     display(&arr);
//     printf("\n");
//     insert(&arr, 1,9999);
//     display(&arr);
//     return 0;
// }