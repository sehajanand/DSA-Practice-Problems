# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void displayList(struct node *ptr){
    printf("{");
    while(ptr!=NULL){
        printf("%d,",ptr->data);
        ptr=ptr->next;
    };
    printf("}\n");
;};

struct node* insertAfterNode(struct node *ptr,int data){
    struct node *newNode;
    newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=ptr->next;
    ptr->next=newNode;
    return newNode;
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
    displayList(head);
    struct node *ptr=second;
    struct node *newNode=insertAfterNode(ptr,99);
    displayList(head);
    return 0;   
}