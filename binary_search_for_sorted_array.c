// USING SIMPLE ARRAY SYNTAX:-

// # include <stdio.h>
// # include<stdlib.h>

// int binarySearch(int arr[], int size, int el){
//     int low=0,mid,high=size-1;
//     while(low<=high){
//         mid=(low+high)/2;
//         if(arr[mid]==el){
//             return mid;
//         }
//         if(arr[mid]<el){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         };
//     }
//         return -1;
// }
// int main(){
//      int a[]={1,2,3,40};
//      printf("Element found at %d",binarySearch(a,4,3));

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
    }
    printf("}\n");
;};



int binarySearch(struct myArray *ptr, int el){
    int low=0,mid,high=ptr->usedSize-1;
    while(low<=high){
        mid=(low+high)/2;
        if(ptr->ptr[mid]==el){
            return mid;
        }
        if(ptr->ptr[mid]<el){
            low=mid+1;
        }
        else{
            high=mid-1;
        };
    }
        return -1;
;};

int main(){
    struct myArray *sortedArray=createArray(10);
    setElements(sortedArray,5);
    displayArray(sortedArray);
    int elementIndexInSortedArray=binarySearch(sortedArray,3);
    printf("%d\n",elementIndexInSortedArray);
    return 0;
}