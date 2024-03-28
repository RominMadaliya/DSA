#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void Insert_End(int val)
{
    struct node *ptr=head;

    struct node *temp = malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        return;
    }

    while(ptr->next != NULL)
    {
        ptr=ptr->next;
    }

    ptr->next=temp;
    return;

}

void Delete_End()
{
    struct node* ptr=head;
    struct node* p;

    if(head->next == NULL)
    {
        head=NULL;
        free(ptr);
        return;
    }

    while(ptr->next != NULL)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next=NULL;
    free(ptr);
    return;
}

void Insert_First(int val)
{
    struct node* ptr=head;
    struct node* temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=head;
    head=temp;

}

void Delete_First()
{
    struct node* ptr=head;
    head=ptr->next;
    free(ptr);

}



void display()
{
    struct node *ptr=head;

    if(head == NULL)
    {
        printf("The List is Alaready Empty....");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        
    }
    printf("\n\n");
}




int main()
{

    int n;
    do 
    {

    printf("\n press 1. for Insert End");
    printf("\n press 2. for Delete End");
    printf("\n press 3. for Insert First");
    printf("\n press 4. for Delete First");
    printf("\n press 7. for Display");

    printf("\n\nEnter Your choice :");
    scanf("%d",&n);

    if(n<=0 || n>7)
    {
        printf("\n Invalid Input!!!\n");
    }

    if(n==1)
    {
        int num;

        printf("Enter the number you want to add in the List :");
        scanf("%d",&num);

        Insert_End(num);
    }

    else if(n==2)
    {
        Delete_End();
    }
    else if(n==3)
    {
        int num;

        printf("Enter the number you want to add in the List :");
        scanf("%d",&num);

        Insert_First(num);
    }

     else if(n==4)
    {
        Delete_First();
    }

    else if(n==7)
    {
        display();
    }


    }while(n>0 || n<=7);
} 