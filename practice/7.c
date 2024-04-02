#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* head=NULL;
struct node* tail=NULL;

void Insert_End(int num)
{
    struct  node* temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->next=head;

    if(head==NULL && tail==NULL)
    {
        head=temp;
        tail=temp;
        return;
    }
    tail->next=temp;
    tail=temp;
}

void Insert_First(int num)
{
    struct  node* temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->next=head;
    head=temp;
    tail->next=head;
}

void Delete_End()
{
    struct node* ptr=tail;
    struct node* p=head;

    if(head==NULL)
    {
        printf("\n\n The List Alaready Empty!!");
    }
    if(head==tail)
    {
        head=tail=NULL;
        return;
    }
    while(p->next != tail)
    {
        p=p->next;
    }
    p->next=head;
    tail=p;
    free(ptr);
}

void Delete_First()
{
    if(head==NULL)
    {
        printf("\n\n The List Alaready Empty!!");
    }
    struct node* ptr=head;
    head=head->next;
    tail->next=head;
    free(ptr);  
}
void Insert_Mid(int num,int pos)
{
    struct  node* ptr=head;
    struct node* p;

    struct node* temp=malloc(sizeof(struct node));
    temp->data=num;

    
    while(ptr->data != pos)
    {
        p=ptr;
        ptr=ptr->next;
    }

    p->next=temp;
    temp->next=ptr;
}

void Delete_Mid(int pos)
{
    struct node* ptr=head;
    struct node* p;

    while(ptr->data != pos)
    {
        p=ptr;
        ptr=ptr->next;
    }

    p->next=ptr->next;
    free(ptr);
}
void display()
{
    struct node* ptr=head;
    printf("\n");

    if(head==NULL)
    {
        printf("\n\n The List Alaready Empty!!");
    }
    else
    {
    while(ptr != tail)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
    printf("\n");
    }
    
}

int main()
{

    int n,pos;
    do 
    {

    printf("\n press 1. for Insert End");
    printf("\n press 2. for Delete End");
    printf("\n press 3. for Insert First");
    printf("\n press 4. for Delete First");
    printf("\n press 5. for Insert Mid");
    printf("\n press 6. for Delete Mid");
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
    else if(n==5)
    {
        int num;

        printf("Enter the position where you can add your new Number : ");
        scanf("%d",&pos);

        display();

        printf("Enter the number you want to add in the List :");
        scanf("%d",&num);

        Insert_Mid(num,pos);
        display();
    }
    else if(n==6)
    {
        printf("Enter the position where you can delete your data : ");
        scanf("%d",&pos);

        Delete_Mid(pos);
        display();
    }
    else if(n==7)
    {
        display();
    }


    }while(n>0 || n<=7);
} 