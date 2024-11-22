#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    int i = 0;

    while (ptr != NULL)
    {
        printf("element at %d is: %d\n", i + 1, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

struct node *deletionAtStart(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);

    return head;
}

struct node *deletionAtIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;

    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);

    return head;
}

struct node* deletionAtEnd(struct node*head){
    struct node*p=head;
    struct node*q=head->next;

    while (q->next != NULL)
    {
        p=p->next;
        q=q->next;
    }

    p->next=NULL;
    free(q);
    return head;
    
}

int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = NULL;

    printf("\nbefore modification\n");

    linkedListTraversal(head);

    printf("\nafter modification\n");
    // head=deletionAtStart(head);

    // linkedListTraversal(head);

    // head = deletionAtIndex(head, 2);
    // linkedListTraversal(head);

    head=deletionAtEnd(head);
    linkedListTraversal(head);
    return 0;
}
