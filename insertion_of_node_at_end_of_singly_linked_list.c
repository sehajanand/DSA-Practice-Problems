# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void listDisplay(struct node *ptr){
    printf("{");
    while(ptr!=NULL){
        printf("%d,",ptr->data);
        ptr=ptr->next;
    };
    printf("}\n");
;};


struct node* insertAtEnd(struct node *ptr,int data){
    struct node *newLastNode;
    newLastNode=(struct node *)malloc(sizeof (struct node));
    newLastNode->data=data;
    newLastNode->next=NULL;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    };
    ptr->next=newLastNode;
    return newLastNode;
;};

int main(){
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    struct node *second;
    second=(struct node *)malloc(sizeof(struct node));
    struct node *third;
    third=(struct node *)malloc(sizeof(struct node));
    struct node *fourth;
    fourth=(struct node *)malloc(sizeof(struct node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=NULL;
    listDisplay(head);
    struct node *newLastNode=insertAtEnd(head,99);
    listDisplay(head);
    return 0;
}