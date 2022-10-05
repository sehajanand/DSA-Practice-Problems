// USING SIMPLE ARRAY SYNTAX:-

// # include<stdio.h>
// # include<stdlib.h>

// void setElement(int a[],int uSize){
//     for(int i=0;i<uSize;i++){
//         printf("Enter value of element indexed %d of array.\n",i);
//         scanf("%d",&(a[i]));
//     ;};
// ;};

// void display(int a[], int uSize){
//     printf("{");
//     for(int i=0;i<uSize;i++){
//         printf("%d,",a[i]);
//     };
//     printf("}\n");
// ;};

// void deleteElement(int a[],int uSize,int ind){
//     a[ind]=a[uSize-1];
// ;};

// int main(){
//     int a[10];
//     setElement(a,5);
//     display(a,5);
//     deleteElement(a,5,1);
//     display(a,4);
//     return 0;
// }

// USING ARRAY ADT

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

void setElements(struct myArray *ptr, int uSize){
    ptr->usedSize=uSize;
    for(int i=0;i<ptr->usedSize;i++){
        printf("Enter the value of element indexed %d of array.\n",i);
        scanf("%d",&(ptr->ptr[i]));
    };
;};

void displayArray(struct myArray *ptr){
    printf("{");
    for (int i = 0; i < ptr->usedSize; i++)
    {
        printf("%d,",ptr->ptr[i]);
    };
    printf("}\n");
;};

void deleteElement(struct myArray *ptr, int ind){
    ptr->ptr[ind]=ptr->ptr[ptr->usedSize-1];
    --ptr->usedSize;
;};

int main(){
    struct myArray *arr=createArray(10);
    setElements(arr,5);
    displayArray(arr);
    deleteElement(arr,1);
    displayArray(arr);
    return 0;
}