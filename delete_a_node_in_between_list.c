# include<stdio.h>
# include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
// 1234
void delete(struct node *ptr, int ind){
    int i=0;
    struct node *p1;
    struct node *p2;
    while(i<=ind-1){
        if(i==ind-1){
            p1=ptr;
        }
        ptr=ptr->next;
        i++;
    };
    p2=ptr->next;
    p1->next=p2;
    free(ptr);
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
    struct node *e;
    a=(struct node *)malloc(sizeof(struct node));
    b=(struct node *)malloc(sizeof(struct node));
    c=(struct node *)malloc(sizeof(struct node));
    d=(struct node *)malloc(sizeof(struct node));
    e=(struct node *)malloc(sizeof(struct node));
    a->data=1;
    a->next=b;
    b->data=2;
    b->next=c;
    c->data=3;
    c->next=d;
    d->data=4;
    d->next=e;
    e->data=5;
    e->next=NULL;
    display(a);
    delete(a,2);
    display(a);
    return 0;
}