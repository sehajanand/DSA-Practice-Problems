# include<stdio.h>


int binarySearch(int arr[], int size, int el){
    int low=0,mid,high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==el){
            return mid;
        }
        if(arr[mid]<el){
            low=mid+1;
        }
        else{
            high=mid-1;
        };
    }
        return -1;
}
int main(){
     int a[]={1,2,3,40};
     printf("Element found at %d",binarySearch(a,4,3));

    return 0;
}