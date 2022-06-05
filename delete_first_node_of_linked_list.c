# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node *ptr;
};

void display(struct node *ptr){
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->ptr;
    };
    printf("\n");
;};

void deleteFirstNode(struct node *ptr){
    free(ptr);
};

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
    a->ptr=b;
    b->data=2;
    b->ptr=c;
    c->data=3;
    c->ptr=d;
    d->data=4;
    d->ptr=NULL;
    display(a);
    deleteFirstNode(a);
    display(b);
    return 0;
}