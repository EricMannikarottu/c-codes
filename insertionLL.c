#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

    struct node* insertAtFirst(struct node* head, int data) {
        struct node* ptr = (struct node*) malloc(sizeof (struct node));

        ptr->next=head;
        ptr->data=data;

        return ptr;
    }

    struct node* insertAtIndex(struct node* head, int data, int index){
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        struct node*p=head;
        int i=0;

        while (i != index-1)
        {
            p=p->next;
            i++;

        }
        ptr->data=data;
        ptr->next=p->next;
        p->next=ptr;
         
         return head;
    }

    struct node* inserAtEnd(struct node* head, int data){
        struct node* ptr=(struct node*)malloc(sizeof(struct node));
        struct node* p= head;

        ptr->data=data;

        while (p->next!= NULL)

        {
            p=p->next;

        }
        p->next=ptr;
        ptr->next=NULL;
        
        return head;
    }

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;
    second->data = 6;
    second->next = third;
    third->data = 54;
    third->next = NULL;

    linkedListTraversal(head);
    // head=insertAtFirst(head,88);
    // linkedListTraversal(head);

//    head= insertAtIndex(head,100,1);
//     linkedListTraversal(head);

        head=inserAtEnd(head,69696);
        linkedListTraversal(head);
    return 0;
}