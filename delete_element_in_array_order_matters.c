// # include<stdio.h>

// void deleteElement(int arr[], int ind, int size){
//     for(int i=ind;i<=size-1;i++){
//         arr[i]=arr[i+1];
//     }
// ;};
// //1234
// //0123
// void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     };
//     printf("\n");
// ;};
// int main(){
//     int a[100]={1,2,3,4};
//     display(a,4);
//     deleteElement(a,2,4);
//     display(a,3);
//     printf("%d",a[3]);
//     return 0;
// }
# include<stdio.h>
# include<stdlib.h>

struct myArray{
    int t_size;
    int u_size;
    int *p;
};

void createArray(struct myArray *ptr,int tSize){
    ptr->t_size=tSize;
    ptr->p=(int *)malloc(tSize*sizeof(int));
;};

void setVal(struct myArray *ptr, int uSize){
    ptr->u_size=uSize;
    for(int i=0;i<uSize;i++){
        printf("Enter element indexed %d of array\n",i);
        scanf("%d",&(ptr->p[i]));
    };
;};

void delete(struct myArray *ptr, int ind){
    for(int i=ind;i<=ptr->u_size-1;i++){
        ptr->p[i]=ptr->p[i+1];
    };
    ptr->u_size=ptr->u_size-1;
;};

void display(struct myArray *ptr){
    for(int i=0;i<ptr->u_size;i++){
        printf("%d ",ptr->p[i]);
    };
    printf("\n");
;};

int main(){
    struct myArray arr;
    createArray(&arr,10);
    setVal(&arr,7);
    display(&arr);
    delete(&arr,2);
    display(&arr);
    return 0;
}