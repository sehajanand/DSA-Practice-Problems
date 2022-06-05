# include<stdio.h>

struct node {
    int data;
    struct node *next;
};

void display(struct node *ptr){
    while(ptr!=NULL){
        printf("Element: %d \n",ptr->data);
        ptr=ptr->next;
    };
;};
struct node* insert(struct node *ptr){
    struct node *newHead;
    newHead=(struct node *)malloc(sizeof(struct node));
    newHead->data=100;
    newHead->next=ptr;
    return newHead;
;};
int main (){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node *)malloc(sizeof(struct node ));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    display(head);
    printf("\n");
    struct node *newHead=insert(head);
    display(newHead);
    return 0;
}



// # include<stdio.h>

// struct node{
//     int data;
//     struct node *next;
// };
// struct node insertNode(struct node *head, int data){
//     struct node newFirst;
//     newFirst.data=data;
//     newFirst.next=head;
//     return newFirst;
// }
// void displayLinkedList(struct node *ptr){
//     while(ptr!=NULL){
//         printf("Element :%d.\n",ptr->data);
//         ptr=ptr->next;
//     };
// };
// int main(){
//     struct node first;
//     struct node second;
//     struct node third;
//     struct node fourth;
//     first.data=1;
//     first.next=&second;
//     second.data=2;
//     second.next=&third;
//     third.data=3;
//     third.next=&fourth;
//     fourth.data=4;
//     fourth.next=NULL;
//     displayLinkedList(&first);
//     printf("\n");
//     struct node newFirst=insertNode(&first,105);
//     displayLinkedList(&newFirst);
//     return 0;  
// };