// # include<stdio.h>

// struct node{
//     int data;
//     struct node *next;
// };

// struct node insert(struct node *ptr, int ind,int data ){
//     int i=0;
//     struct node element;
//     element.data=data;
//     while(i!=ind){
//         ptr=ptr->next;
//         i++;
//     };
//     struct node *p;
//     p=ptr;
//     p=ptr->next;
//     ptr->next=&element;
//     element.next=p;
//     return element;
// ;};
// //&head 2 100
// //2
// //
// //1234
// //0123
// void display(struct node *ptr){
//     while(ptr!=NULL){
//         printf("Element : %d\n",ptr->data);
//         ptr=ptr->next;
//     };
// ;};
// //1234
// int main(){
//     struct node head;
//     struct node second;
//     struct node third;
//     struct node fourth;
//     head.data=1;
//     head.next=&second;
//     second.data=2;
//     second.next=&third;
//     third.data=3;
//     third.next=&fourth;
//     fourth.data=4;
//     fourth.next=NULL;
//     display(&head);
//     printf("\n");
//     struct node newElement=insert(&head,2,100);
//     display(&head);
//     return 0;
// }
# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void display(struct node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    };
    printf("\n");
;};

struct node * insert(struct node *ptr, int data, int ind){
    struct node *newElement;
    newElement=(struct node *)malloc(sizeof(struct node));
    newElement->data=data;
    int i=0;
    while(i!=ind-1){
        ptr=ptr->next;
        i++;
    };
    struct node *p=ptr->next;
    ptr->next=newElement;
    ptr=ptr->next;
    ptr=ptr->next;
    newElement->next=p;
    return newElement;
;};

int main(){
    struct node *a;
    struct node *b;
    struct node *c;
    struct node *d;
    a=(struct node *)malloc(sizeof(struct node));
    b=(struct node *)malloc(sizeof(struct node));
    c=(struct node *)malloc(sizeof(struct node));
    d=(struct node *)malloc(sizeof(struct node));
    a->data=1;
    a->next=b;
    b->data=2;
    b->next=c;
    c->data=3;
    c->next=d;
    d->data=4;
    d->next=NULL;
    display(a);
    insert(a,100, 2);
    display(a);
    return 0;
}