#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    };
    printf("\n");
    ;
};

struct node *insertInBetween(struct node *head, int ind, int data)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    new->data = data;
    int i = 0;
    while (i != ind - 1)
    {
        p = p->next;
        i++;
    };
    new->next = p->next;
    p->next = new;
    return new;
    ;
};

struct node *insertAtStart(struct node *head, int data)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = head;
    head = new;
    return head;
    ;
};

struct node *insertAferNode(struct node *ptr, int data)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = ptr->next;
    ptr->next = new;
    return new;
    ;
};

struct node *deleteAtStart(struct node *head)
{
    struct node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
    return head;
    ;
};

void deleteInBetween(struct node *head, int ind)
{
    int i = 0;
    while (i != ind - 1)
    {
        head = head->next;
        i++;
    };
    struct node *p;
    p = head->next;
    head->next = p->next;
    free(p);
};

void deleteAfterNode(struct node *ptr)
{
    struct node *p;
    p = ptr->next;
    ptr->next = p->next;
    free(p);
};

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head = first;
    first->data = 1;
    first->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = NULL;
    display(head);
    // deleteInBetween(head,3);
    // display(head);
    // struct node *a = insertInBetween(head, 4, 100);
    // display(head);s
    head = insertAtStart(head, 99);
    display(head);
    // struct node *c = insertAferNode(second, 999);
    // display(head);
    // head = deleteAtStart(head);
    // display(head);
    return 0;
};
