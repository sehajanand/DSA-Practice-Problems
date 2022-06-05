// # include<stdio.h>
// # include<stdlib.h>

// struct node{
//     int data; 
//     struct node *next;
// };
// void displayLinkedList(struct node *p){
//     while(p!=NULL){
//         printf("Element : %d.\n",p->data);
//         p=p->next;
//     };
// };
// int main(){
//     struct node *first;
//     first=(struct node *)malloc(sizeof(struct node));
//     struct node *second;
//     second=(struct node *)malloc(sizeof(struct node));
//     struct node *third;
//     third=(struct node *)malloc(sizeof(struct node));
//     struct node *fourth;
//     fourth=(struct node *)malloc(sizeof(struct node));
//     first->data=1;
//     first->next=second;
//     second->data=2;
//     second->next=third;
//     third->data=3;
//     third->next=fourth;
//     fourth->data=4;
//     fourth->next=NULL;
//     displayLinkedList(first);
//     return 0;
// }
# include<stdio.h>

struct node{
    int data;
    struct node *next;
};
void displayLinkedList(struct node *ptr){
    while(ptr!=NULL){
        printf("Element :%d.\n",ptr->data);
        ptr=ptr->next;
    };
};
int main(){
    struct node first;
    struct node second;
    struct node third;
    struct node fourth;
    first.data=1;
    first.next=&second;
    second.data=2;
    second.next=&third;
    third.data=3;
    third.next=&fourth;
    fourth.data=4;
    fourth.next=NULL;
    displayLinkedList(&first);
    return 0;  
};