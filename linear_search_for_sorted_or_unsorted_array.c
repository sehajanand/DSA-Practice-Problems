// USING SIMPLE ARRAY SYNTAX:-

// # include<stdio.h>
// # include<stdlib.h>

// int linearSearch(int a[],int uSize,int element){
//     for(int i=0;i<uSize;i++){
//         if(a[i]==element){
//             return i;
//         };
//     };
//     printf("Element not found.\n");
// ;};

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int elementIndex=linearSearch(arr,5,1);
//     printf("%d",elementIndex);
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

int linearSearch(struct myArray *ptr,int element){
    for(int i=0;i<ptr->usedSize;i++){
        if(ptr->ptr[i]==element){
            return i;
        };
    };
    printf("Element not found.\n");
;};

int main(){
    struct myArray *arr=createArray(10);
    setElements(arr,5);
    displayArray(arr);
    int elementIndex=linearSearch(arr,2);
    printf("%d",elementIndex);
    return 0;
}