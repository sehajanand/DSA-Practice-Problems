# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void deleteLastNode(struct node *ptr){
    struct node *p;
    while(ptr->next!=NULL){
        if((ptr->next)->next==NULL){
            p=ptr;
        };
        ptr=ptr->next;
    };
    free(ptr);
    p->next=NULL;
;};

void display(struct node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    };
    printf("\n");
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
    deleteLastNode(a);
    display(a);
    return 0;
}