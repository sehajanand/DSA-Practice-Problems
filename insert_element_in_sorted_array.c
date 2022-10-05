// USING SIMPLE ARRAY SYNTAX:-

// # include<stdio.h>
// # include<stdlib.h>

// void insert(int a[], int uSize,int index, int el){
//     for(int i=uSize;i>index;i--){
//         a[i]=a[i-1];
//     };
//     a[index]=el;
// ;};

// void setElements(int a[],int uSize){
//     for (int i = 0; i < uSize; i++)
//     {
//         printf("Enter value of element indexed %d of array.\n",i);
//         scanf("%d",&a[i]);
//     };
// ;};

// void displayArray(int a[],int uSize){
//     for(int i=0;i<uSize;i++){
//         printf("Value of element indexed %d is %d.\n",i,a[i]);
//     };
// ;};

// int main(){
//     int arr[10];
//     setElements(arr,5);
//     displayArray(arr,5);
//     insert(arr,5,1,100);
//     displayArray(arr,6);
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
    return ptr;
;};

void setElements(struct myArray *ptr, int uSize){
    ptr->usedSize=uSize;
    for(int i=0; i<ptr->usedSize;i++){
        printf("Enter value of element indexed %d of array.\n",i);
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

void insertElement(struct myArray *ptr,int index, int el){
    if(ptr->usedSize==ptr->totalSize){
        printf("Array Overflow!\n");
    }else{
    for(int i=ptr->usedSize;i>index;i--){
        ptr->ptr[i]=ptr->ptr[i-1];
    };
    ptr->ptr[index]=el;
    ++ptr->usedSize;
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