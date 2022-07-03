# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node *ptr;
};

void display(struct node *head){
    struct node *headStore=head;
    do{
        printf("%d ",head->data);
        head=head->ptr;
    }while(head!=headStore);
    printf("\n");
;};
struct node * insertAtStart(struct node *head, int data){
    struct node *headStore=head;
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=data;
    new->ptr=head;
    do{
        headStore=headStore->ptr;
    }while(headStore->ptr!=head);
    head=new;
    headStore->ptr=new;
    return head;
;};

struct node* insertInBetween(struct node *head, int data, int ind){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node *));
    new->data=data;
    for(int i=0;i<ind-1;i++){
        head=head->ptr;
    };
    new->ptr=head->ptr;
    head->ptr=new;
    return new;
;};

struct node * insertAfterNode( struct node *ptr,int data){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=data;
    new->ptr=ptr->ptr;
    ptr->ptr=new;
    return new;
;};

struct node* deleteAtStart(struct node *head){
    struct node *headStore=head;
    do{
        head=head->ptr;
    }while(head->ptr!=headStore);
    struct node *nodeToBeDeleted=head->ptr;
    head->ptr=headStore->ptr;
    headStore=headStore->ptr;
    free(nodeToBeDeleted);
    return headStore;
;};

void deleteInBetween(struct node *head, int ind){
    for(int i=0;i<ind-1;i++){
        head=head->ptr;
    };
    struct node *nodeToBeDeleted=head->ptr;
    head->ptr=(head->ptr)->ptr;
    free(nodeToBeDeleted);
;};

void deleteAfterNode(struct node *ptr){
    struct node *nodeToBeDeleted=ptr->ptr;
    ptr->ptr=(ptr->ptr)->ptr;
    free(nodeToBeDeleted);
}

int main(){
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    head=first;
    first->data=1;
    first->ptr=second;
    second->data=2;
    second->ptr=third;
    third->data=3;
    third->ptr=fourth;
    fourth->data=4;
    fourth->ptr=first;
    display(head);
    head=insertAtStart(head,100);
    display(head);
    struct node *new=insertInBetween(head,99,5);
    display(head);
    struct node *new2=insertAfterNode(first,88);
    display(head);
    head=deleteAtStart(head);
    display(head);
    deleteInBetween(head,1);
    display(head);
    deleteAfterNode(second);
    display(head);
    return 0;
}