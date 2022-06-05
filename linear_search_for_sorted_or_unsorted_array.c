# include<stdio.h>
int linearSearch(int a[], int size, int el){
    for(int i=0;i<size;i++){
        if(a[i]==el){
            return i;
        };
    };
    return -1;
;};

int main(){
    int a[]={1,2,3,4,5,6,7,8};
    printf("Element was found at %d.\n",linearSearch(a,8,900));
    return 0;
}