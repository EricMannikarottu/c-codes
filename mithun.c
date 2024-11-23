#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void linkedListTraversal(struct node*ptr){
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node* insertAtStart (struct node* head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));

    ptr->next=head;
    ptr->data=data;

    return ptr;


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

int main(){

struct node* head= (struct node*)malloc(sizeof(struct node));
struct node* second= (struct node*)malloc(sizeof(struct node));
struct node* third= (struct node*)malloc(sizeof(struct node));

head->data=50;
head->next=second;
second->data=51;
second->next=third;
third->data=52;
third->next=NULL;

linkedListTraversal(head);
head= insertAtStart(head,69);
linkedListTraversal(head);



    return 0;
}