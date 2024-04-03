#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node* head=NULL;

void Insert_End(int val)
{
    struct node* ptr=head;
    struct node* temp=malloc(sizeof(struct  node));
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;
    
    if(head==NULL)
    {
        head=temp;
        head->next=head;
        head->prev=head;
    }
    else
    {
        while(ptr->next != head)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->prev=ptr;
        temp->next=head;
        head->prev=temp;
    }
}

void  Delete_End()
{
    struct node* ptr=head;
    struct node* p;

    if(head->next==head)
    {
        head=NULL;
        free(ptr);
    }
    else
    {
        while(ptr->next != head)
        {
            p=ptr;
            ptr=ptr->next;
        }
        p->next=head;
        head->prev=p;
        free(ptr);
    }
}

void Insert_First(int num)
{
    struct node* ptr=head;
    struct node* temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->next=NULL;
    temp->prev=NULL;

     if(head==NULL)
    {
        head=temp;
        head->next=head;
        head->prev=head;
    }
    else
    {
    while(ptr->next != head)
        {
            ptr=ptr->next;
        }
        temp->next=head;
        head->prev=temp;
        head=temp;
        ptr->next=head;
        head->prev=ptr;
    }
}

void Delete_First()
{
    struct node* ptr=head;
    struct node* p=head;

     if(head->next==head)
    {
        head=NULL;
        free(ptr);
    }
    else
    {
        while(ptr->next != head)
        {
            ptr=ptr->next;
        }
        head=head->next;
        ptr->next=head;
        head->prev=ptr;
        free(p);
    }

}

void Insert_Mid(int val, int pos)
{
    struct node* ptr=head;
    struct node* p;
    struct node* temp=malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    temp->prev=NULL;

    while(ptr->data != pos)
        {
            p=ptr;
            ptr=ptr->next;
        }
        p->next=temp;
        temp->prev=p;
        temp->next=ptr;
        ptr->prev=temp;
}

void Delete_Mid(int pos)
{
    struct node *ptr = head;
    struct node *p;

    while (ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    ptr->next->prev = p;
    free(ptr);
}

void display()
{
    struct node* ptr=head;

    if(head == NULL)
    {
        printf("The List is Alerady Empty!!");
    }
    else
    {
        while(ptr->next != head)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
         printf("%d ",ptr->data);
         printf("\n");
    }
}


int main()
{

    int n, pos;
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
        scanf("%d", &n);

        if (n <= 0 || n > 7)
        {
            printf("\n Invalid Input!!!\n");
        }

        if (n == 1)
        {
            int num;

            printf("Enter the number you want to add in the List :");
            scanf("%d", &num);

            Insert_End(num);
        }

        else if (n == 2)
        {
            Delete_End();
        }
        else if (n == 3)
        {
            int num;

            printf("Enter the number you want to add in the List :");
            scanf("%d", &num);

            Insert_First(num);
        }

        else if (n == 4)
        {
            Delete_First();
        }
        else if (n == 5)
        {
            int num;

            printf("Enter the position where you can add your new Number : ");
            scanf("%d", &pos);

            display();

            printf("Enter the number you want to add in the List :");
            scanf("%d", &num);

            Insert_Mid(num, pos);
            display();
        }
        else if (n == 6)
        {
            printf("Enter the position where you can delete your data : ");
            scanf("%d", &pos);

            Delete_Mid(pos);
            display();
        }
        else if (n == 7)
        {
            display();
        }

    } while (n > 0 || n <= 7);
}th