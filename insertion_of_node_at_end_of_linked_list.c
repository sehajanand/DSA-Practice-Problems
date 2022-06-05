// #include <stdio.h>

// struct node
// {
//     int data;
//     struct node *next;
// };

// void display(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("%d ", ptr->data);
//         ptr=ptr->next;
//     };
//     printf("\n");
//     ;
// };

// struct node insertAtEnd(struct node *ptr, int data)
// {
//     struct node newElement;
//     newElement.data = data;
//     while (ptr->next != NULL)
//     {
//         ptr = ptr->next;
//     };
//     ptr->next = &newElement;
//     newElement.next = NULL;
//     return newElement;
//     ;
// };

// int main()
// {
//     struct node a;
//     struct node b;
//     struct node c;
//     struct node d;
//     a.data = 1;
//     a.next = &b;
//     b.data = 2;
//     b.next = &c;
//     c.data = 3;
//     c.next = &d;
//     d.data = 4;
//     d.next = NULL;
//     display(&a);
//     struct node newElement = insertAtEnd(&a, 100);
//     display(&a);
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

struct node * insertAtEnd(struct node *ptr,int data){
    struct node *newElement;
    newElement=(struct node *)malloc(sizeof(struct node));
    newElement->data=data;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    };
    ptr->next=newElement;
    newElement->next=NULL;
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
    insertAtEnd(a,99);
    display(a);
    return 0;
}