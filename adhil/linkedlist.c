#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

void display(struct node* head){
    struct node *temp=head;
    if(head==NULL){
        printf("linked list is empty");
    }
    else{
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
struct node* insertAtbeginning(struct node* head,int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode ==NULL){
        printf("memory allocation failed!\n");
        return head;
    }
    newnode->data = val;
    newnode->next = head;
    head = newnode;
    return head;
}
struct node* insertAtEnd(struct node* head, int val){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL) {
    printf("memory allocation failed\n");
    return head;
    }
    newnode->data = val;
    newnode->next = NULL;

    if (head == NULL) {
        return newnode;
    }


    struct node *temp = head;
    while (temp->next !=NULL) {
        temp = temp->next;
    }

    temp->next = newnode;
    return head;
}
struct node* insertAfternode(struct node *head, int targetValue, int val) {
        struct node *temp = head;
        while (temp != NULL && temp->data !=targetValue){
            temp = temp->next;
        }
        if(temp == NULL){
            printf("Node with value %d not found in the list!/n",targetValue);
        }
    }
int main(){
    struct node *head=NULL,*newnode,*temp;
    int choice=1;
    while (choice ==1) {
        newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("memory allocation failed\n");
            break;
        }
        printf("enter data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = head;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("do you want to insert more data?(1 for yes,o for no):");
        scanf("%d",&choice);
    }
    printf("the linked list is:");
    display(head);
    head=insertAtbeginning(head,100);
    printf("/nthe linked list after inserting 200 at the end is :");
    head=insertAtEnd(head,200);
    display(head);
    return 0;
}
