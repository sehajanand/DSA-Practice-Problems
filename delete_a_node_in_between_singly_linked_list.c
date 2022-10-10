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

void deleteNodeInBetween(struct node *ptr,int index){
    for(int i=0;i<index-2;i++){
        ptr=ptr->next;
    };
    struct node *nodeToBeDeleted=ptr->next;
    ptr->next=(ptr->next)->next;
    free(nodeToBeDeleted);
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
    deleteNodeInBetween(head,3);
    displayList(head);
    return 0;
}