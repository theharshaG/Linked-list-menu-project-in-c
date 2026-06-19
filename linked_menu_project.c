#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void insertEnd(){
    struct Node *newnode;
    struct Node *temp;
    
    newnode=malloc(sizeof(struct Node));
    printf("Enter the data:");
    scanf("%d",&newnode->data);
    
    newnode->next=NULL;
    
    if(head==NULL){
        head=newnode;
        printf("\nData inserted.\n");
        return;
    }
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    printf("\nData inserted.\n");
}
void display(){
    struct Node *temp;
    temp=head;
    if(head==NULL){
        printf("\nEmpty list.\n");
        return;
        
    }
    printf("Linked list=>");
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

void search(){
    int key;
    int pos=1;
    int found=0;
    
    struct Node *temp;
    
    temp=head;
    
    if(head==NULL){
        printf("List Empty.");
        return;
    }
    printf("Enter data to search:");
    scanf("%d",&key);
    while(temp!=NULL){
        if(key==temp->data){
            printf("data found at %d\n",pos);
            found=1;
            return;
        }
        temp=temp->next;
        pos++;
    }
    if(found==0){
        printf("Not found");
    }
}

void count(){
    int count=0;
    struct Node *temp;
    temp=head;
    
    if(head==NULL){
        printf("List Empty.\n");
        return;
    }
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    printf("total list:%d\n",count);
}
void delete()
{
    int value;

    struct Node *temp;

    if(head==NULL)
    {
        printf("List Empty.\n");

        return;
    }

    printf("Enter data to delete:");

    scanf("%d",&value);


    if(head->data==value)
    {
        struct Node *del=head;

        head=head->next;

        free(del);

        printf("Deleted.\n");

        return;
    }
    temp=head;
    
    while(temp->next!=NULL && temp->next->data!=value)
    {
        temp=temp->next;
    }

    if(temp->next==NULL)
    {
        printf("Not Found.\n");

        return;
    }

    struct Node *del=temp->next;

    temp->next=del->next;

    free(del);

    printf("Deleted.\n");
}

void reverse(){
    if(head==NULL)
    {
    printf("List Empty.\n");
    return;
    }
    
    struct Node *prev=NULL;
    struct Node *curr=head;
    struct Node *next=NULL;
    
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    printf("\nReversed List:");
    struct Node *temp;
    temp=head;
    
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
void middle(){
    if(head==NULL){
        printf("List Empty.\n");
        return;
    }
    struct Node *slow=head;
    struct Node *fast=head;
    
    while(fast!=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    printf("Middle=%d\n",slow->data);
}


int main()
{
    int choice;
    do{
        printf("\n1.Insert End.\n");
        printf("2.Display.\n");
        printf("3.search.\n");
        printf("4.count list.\n");
        printf("5.Delete.\n");
        printf("6.Reverse.\n");
        printf("7.Middle.\n");
        printf("8.Exit.\n");
        
        printf("\nEnter choice:");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                insertEnd();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                count();
                break;
            case 5:
                delete();
                break;
            case 6:
                reverse();
                break;
            case 7:
                middle();
                break;
                
            case 8:
                printf("BYE");
                break;
        }
    }while(choice!=8);

    return 0;
}
