// ARRAY OPERATIONS  USING  ARRAY ADT:-

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

void insertElementInSortedArray(struct myArray *ptr,int index, int el){
    if(ptr->usedSize==ptr->totalSize){
        printf("Array Overflow!\n");
    }else{
        for(int i=ptr->usedSize;i>index;i--){
            ptr->ptr[i]=ptr->ptr[i-1];
        };
        ++ptr->usedSize;
        ptr->ptr[index]=el;
    };
;};


void insertElementInUnsortedArray(struct myArray *ptr,int index,int el){
    if(ptr->usedSize==ptr->totalSize){
        printf("Array Overflow!\n");
    }else{
        ptr->ptr[ptr->usedSize]=ptr->ptr[index];
        ptr->ptr[index]=el;
        ++ptr->usedSize;
    };
;};

void deleteElementInSortedArray(struct myArray *ptr,int index){
    if(ptr->usedSize==0){
        printf("Array Underflow!\n");
    }else{
        for(int i=index;i<ptr->usedSize-1;i++){
            ptr->ptr[i]=ptr->ptr[i+1];
        };   
        --ptr->usedSize;
    };
;};

void deleteElementInUnsortedArray(struct myArray *ptr,int index){
    if(ptr->usedSize==0){
        printf("Array Underflow!\n");
    }else{
        ptr->ptr[index]=ptr->ptr[ptr->usedSize-1];
    };
    --ptr->usedSize;
;};

int linearSearch(struct myArray *ptr,int el){
    for(int i=0;i<ptr->usedSize;i++){
        if(ptr->ptr[i]==el){
            return i;
        };
    };
    return -1;
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
    insertElementInSortedArray(sortedArray,1,99);
    displayArray(sortedArray);
    deleteElementInSortedArray(sortedArray,1);
    displayArray(sortedArray);
    int elementIndexInSortedArray=linearSearch(sortedArray,2);
    printf("%d\n",elementIndexInSortedArray);
    elementIndexInSortedArray=binarySearch(sortedArray,3);
    printf("%d\n",elementIndexInSortedArray);
    struct myArray *unsortedArray=createArray(10);
    setElements(unsortedArray,5); // 1 4 2 8 6 
    displayArray(unsortedArray);
    insertElementInUnsortedArray(unsortedArray,1,99);
    displayArray(unsortedArray);
    deleteElementInUnsortedArray(unsortedArray,1);
    displayArray(unsortedArray);
    int elementIndexInUnsortedArray=linearSearch(unsortedArray,4);
    printf("%d\n",elementIndexInUnsortedArray);
    return 0;
}