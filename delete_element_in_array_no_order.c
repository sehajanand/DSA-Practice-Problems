// # include<stdio.h>

// void deleteElement(int arr[], int ind, int size){
//     arr[ind]=arr[size-1];
//     arr[size-1]=arr[size];
// ;};
// void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     };
//     printf("\n");
// ;};
// int main(){
//     int a[100]={1,2,4,5};
//     display(a,4);
//     deleteElement(a,0,4);
//     display(a,3);
//     return 0;
// }
# include<stdio.h>
# include<stdlib.h>

struct myArray{
    int t_size;
    int u_size;
    int *p;
};
void createArray(struct myArray *ptr, int tSize){
    ptr->t_size=tSize;
    ptr->p=(int *)malloc(tSize*sizeof(int));
;};

void setVal(struct myArray *ptr, int uSize){
    ptr->u_size=uSize;
    for(int i=0;i<uSize;i++){
        printf("Enter value of element indexed %d of array.\n",i);
        scanf("%d",&(ptr->p[i]));
    };
;};

void delete(struct myArray *ptr, int ind){
    ptr->p[ind]=ptr->p[ptr->u_size-1];
    ptr->p[ptr->u_size-1]=ptr->p[ptr->u_size];
    ptr->u_size=ptr->u_size-1;
;};

void display(struct myArray *ptr){
    for (int i = 0; i < ptr->u_size; i++)
    {
        printf("%d ",ptr->p[i]);
    };
    printf("\n");
;};


int main(){
    struct myArray arr;
    createArray(&arr,10);
    setVal(&arr,7);
    display(&arr);
    delete(&arr,3);
    display(&arr);
    return 0;
}