#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *ptr;
};

void display(struct node *head)
{
    struct node *first = head;
    do
    {
        printf("%d ", head->data);
        head = head->ptr;
    } while (head != first);
    printf("\n");
    ;
};

struct node *insertAtStart(struct node *head, int data)
{
    struct node *p = head;
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->ptr = head;
    while (p->ptr != head)
    {
        p = p->ptr;
    };
    head = new;
    p->ptr = new;
    return head;
    ;
};

struct node *insertInBetween(struct node *head, int data, int ind)
{
    struct node *new;
    new->data = data;
    for (int i = 0; i < ind - 1; i++)
    {
        head = head->ptr;
    };
    new->ptr = head->ptr;
    head->ptr = new;
    return new;
    ;
};

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head = first;
    first->data = 1;
    first->ptr = second;
    second->data = 2;
    second->ptr = third;
    third->data = 3;
    third->ptr = fourth;
    fourth->data = 4;
    fourth->ptr = first;
    display(head);
    head = insertAtStart(head, 99);
    display(head);
    insertInBetween(head, 1000, 5);
    display(head);
    return 0;
}