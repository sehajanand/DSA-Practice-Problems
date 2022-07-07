# include<stdio.h>
# include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

void display(struct node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    };
    printf("\n");
;};

struct node * insertInBetween(struct node *head,int data,int ind){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    for(int i=0;i<ind-1;i++){
        head=head->next;
    };
    new->data=data;
    new->next=head->next;
    (head->next)->prev=new;
    head->next=new;
    new->prev=head;
    return new;
;};

struct node * insertAtStart(struct node *head, int data){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->prev=NULL;
    new->data=data;
    new->next=head;
    head->prev=new;
    return new;
;};

struct node * insertAfterNode(struct node *ptr,int data){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=data;
    new->next=ptr->next;
    (ptr->next)->prev=new;
    ptr->next=new;
    new->prev=ptr;
    return new;
;};

struct node * insertAtEnd(struct node *head, int data){
    while(head->next!=NULL){
        head=head->next;
    };
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=data;
    head->next=new;
    new->prev=head;
    new->next=NULL;
    return new;
;};

void deleteAtStart(struct node *head){
    (head->next)->prev=NULL;
    free(head);
;};

void deleteInBetween(struct node *head,int ind){
    for(int i=0;i<ind-1;i++){
        head=head->next;
    };
    struct node *headStore=head;
    head->next=(head->next)->next;
    (head->next)->prev=headStore;
    free(headStore->next);
;};

void deleteAtEnd(struct node *head){
    while(head->next!=NULL){
        head=head->next;
    };
    (head->prev)->next=NULL;
    free(head);
;};

void deleteAfterNode(struct node *ptr){
    struct node *store=ptr;
    ptr->next=(ptr->next)->next;
    (ptr->next)->prev=ptr;
    free(store->next);
;};

int main(){
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    first->prev=NULL;
    first->data=1;
    first->next=second;
    second->prev=first;
    second->data=2;
    second->next=third;
    third->prev=second;
    third->data=3;
    third->next=fourth;
    fourth->prev=third;
    fourth->data=4;
    fourth->next=NULL;
    display(first);
    struct node *a=insertInBetween(first,99,1);
    display(first);
    struct node *b=insertAtStart(first,100);
    display(b);
    struct node *c=insertAfterNode(third,88);
    display(b);
    struct node *d=insertAtEnd(b,77);
    display(b);
    deleteAtStart(b);
    display(first);
    deleteAtEnd(first);
    display(first);
    deleteAfterNode(third);
    display(first);
    return 0;
}