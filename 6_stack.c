#include <stdio.h>
int top = -1;

void InsertEnd(int arr[],int a,int n)
{

    if (top >=a-1 )
    {

        printf("The Array is full\n");
    }
    else
    {
        printf("\n");
        top++;
        arr[top] = n;
    }
}

void InsertStart(int arr[],int n1,int num)
{
    if (top >=n1-1 )
    {
        printf("The Array is full\n");
    }
    else
    {
        printf("\n");
        for(int a=top,b=top+1;a>=0;a--,b--)
        {
            arr[b]=arr[a];
        }
        arr[0]=num;
        top++;

    }
    
}


void deleteEnd()
{
    printf("\n");
    if (top < 0)
    {
        printf("The Array is empty\n");
    }
    else
    {
        top--;
    }
}

void DeleteStart(int arr[])
{
    printf("\n");
    if (top < 0)
    {
        printf("The Array is empty\n");
    }
    else
    {
        for(int i=0;i<top;i++)
        {
            arr[i]=arr[i+1];
        }
        top--;
    }
}


void Display(int arr[],int a)
{

    if (top < 0)
    {
        printf("The Array is empty\n");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("\nThe Array[%d] is : %d", i, arr[i]);
        }
    }
    printf("\n");
}

int main()
{   int n1;
    printf("Eneter the size of array : ");
    scanf("%d",&n1);
    int arr[n1];

    int num;
    do
    {

        printf("\nPress 1 for InsertEnd Element");
        printf("\nPress 2 for Delete Element");
        printf("\nPress 3 for Insert Element");
        printf("\nPress 4 for Delete Element");
        printf("\nPress 5 for Display");

        printf("\n\nEnter Your Choice :");
        scanf("%d", &num);

        printf("\n");

        if (num < 0 || num > 3)
        {
            printf("Invalid Input!\n");
        }

        if (num == 1)
        {
            int n;
            printf("Enter The number :");
            scanf("%d", &n);
            InsertEnd(arr,n1,n);
        }
        else if (num == 2)
        {
            deleteEnd();
        }
        else if (num == 3)
        {
            int n;
            printf("Enter The number :");
            scanf("%d", &n);
            InsertStart(arr,n1,n);
        }
        else if (num == 4)
        {
            DeleteStart(arr);
        }
        else if (num == 5)
        {
            Display(arr,n1);
        }
    } while (num > 0 || num <= 5);

    return 0;
}