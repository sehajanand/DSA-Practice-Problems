# include<stdio.h>
# include<stdlib.h>

struct myArray{
    int  totalSize;
    int  usedSize;
    int *ptr;
};

struct myArray* createArray(int tSize){
    struct myArray *p;
    p=(struct myArray *)malloc(sizeof(struct myArray));
    p->totalSize=tSize;
    p->ptr=(int *)malloc(tSize*sizeof(int));
    return p;
};

void setVal(struct myArray *p,int uSize){
    p->usedSize=uSize;
    for(int i=0;i<uSize;i++){
        printf("Enter value of element indexed %d of array\n",i);
        scanf("%d",&(p->ptr[i]));
    };
;};

void insertOrderMatters(struct myArray *p,int ind, int el){
    if(p->usedSize==p->totalSize){
        printf("Array overflow\n");
    }else{
    for(int i=p->usedSize-1;i>=ind;i--){
        p->ptr[i+1]=p->ptr[i];
    };
    p->ptr[ind]=el;
    ++p->usedSize;
    };
;};

void insertNoOrder(struct myArray *p,int ind, int el){
    if(p->usedSize==p->totalSize){
        printf("Array overflow!\n");
    }else{
    p->ptr[p->usedSize]=p->ptr[ind];
    p->ptr[ind]=el;
    ++p->usedSize;
   };
;};

void deleteNoOrder(struct myArray *p,int ind){
    if(p->usedSize<=0){
        printf("Array underflow!\n");
    }else{
    p->ptr[ind]=p->ptr[p->usedSize-1];
    --p->usedSize;
    };
;};

void deleteOrder(struct myArray *p, int ind){
    if(p->usedSize<=0){
        printf("Array underflow!\n");
    }else{
    for(int i=ind;i<p->usedSize;i++){
        p->ptr[i]=p->ptr[i+1];
    };
    --p->usedSize;
 }
;};

void display(struct myArray *p){
    for(int i=0;i<p->usedSize;i++){
        printf("%d ",p->ptr[i]);
    };
    printf("\n");
;};

int linearSearch(struct myArray *p,int el){
    int i=0;
    while(i<p->usedSize){
        if(p->ptr[i]==el){
            printf("Element found at index %d\n",i);
            return 0;   
        }else{
            i++;
        }
    };
    printf("Element not found\n");
    return -1;
;};

int binarySearch(struct myArray *p,int el){
    int low, mid, high;
    low=0;
    high=p->usedSize-1;
    while(low<=high){
        mid=(low+high)/2;
        if(p->ptr[mid]==el){
            printf("Element found at index %d\n",mid);
            return 0;
        }
        else if(p->ptr[mid]<el){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    printf("Element not found\n");
    return -1;
;};

int main(){
    struct myArray *a=createArray(10);
    setVal(a,5);
    display(a);
    // insertOrderMatters(a,2,100);
    // display(a);
    // insertNoOrder(a,2,100);
    // deleteOrder(a,2);
    // deleteNoOrder(a,2);
    // linearSearch(a,3);
    binarySearch(a,3);
    display(a);
    return 0;
}